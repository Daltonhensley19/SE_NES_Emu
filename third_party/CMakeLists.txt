# Min should be low enough to support most platforms
cmake_minimum_required(VERSION 3.17)

# Tell CMake where spdlog lives
add_subdirectory(spdlog/)

# Link the spdlog to our emulator executable 
#target_link_libraries(emuGui spdlog::spdlog_header_only)

