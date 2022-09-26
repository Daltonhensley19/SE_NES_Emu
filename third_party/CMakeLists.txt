set(CMAKE_MINIMUM_REQUIRED_VERSION 3.20)

# Tell CMake where spdlog lives
add_subdirectory(spdlog/)

# Link the spdlog to our emulator executable 
target_link_libraries(z80_emu_program spdlog::spdlog_header_only)