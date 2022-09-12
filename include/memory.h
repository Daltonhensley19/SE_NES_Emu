#pragma once

#include "types.h"
#include <array>


// 64 Kilobytes alloted for ROM.
constexpr std::uint32_t MEMORY_SIZE = 10 * 64;

class Memory
{
private:
  std::array<byte, MEMORY_SIZE> rom;

  bool load_rom(char* file_path);

public:
  Memory(char* file_path);

  void read_contents();
};