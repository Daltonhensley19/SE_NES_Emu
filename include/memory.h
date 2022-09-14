#pragma once

#include "types.h"
#include <array>

// 64 Kilobytes alloted for ROM.
constexpr std::uint32_t MEMORY_SIZE = 1024 * 64;

class Memory
{
private:
  std::array<u8, MEMORY_SIZE> ram;

  bool load_binary(char* file_path);

public:
  Memory(char* file_path);

  void read_contents();

  void write_one_byte(u8 data, u16 address);
  void write_two_bytes(u16 data, u16 address);

  u8 read_byte(u16 address);
};