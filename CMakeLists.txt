# Set the minimum CMake version.
cmake_minimum_required(VERSION 3.20)

# Give our project a name.
project(z80_emu_program)


# Grab all of the `.cpp` files from the `/src` directory.
FILE(GLOB CppSourceFiles src/*.cpp)


# Build the program using all of the source files
add_executable(z80_emu_program ${CppSourceFiles})
