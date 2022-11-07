set(CMAKE_MINIMUM_REQUIRED_VERSION 3.17)

# Unix compiler flags (should work on Clang or GCC compilers)
if(UNIX)
    add_compile_options(-Wall -Wextra -Wpedantic -std=c++20 )
endif()

# Identify `EMULATORSOURCES`, which are files which are to be tested 
set(EMULATORSOURCES ../src/emu_sources/registers.cpp 
                    ../src/emu_sources/memory.cpp
                    ../src/emu_sources/flags.cpp)


# The `TESTSOURCES` will consist of test suites. One for memory, one for the CPU, etc.
FILE(GLOB TESTSOURCES *.cpp)

list(APPEND TESTSOURCES ${EMULATORSOURCES})

# Create a seperate program which contains our tests
add_executable(emulator_tests ${TESTSOURCES})

# Link spdlog to `emulator_tests` binary
target_link_libraries(emulator_tests Qt6::Core spdlog::spdlog_header_only)


