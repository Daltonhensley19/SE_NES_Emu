#pragma once

#include "types.h"
#include <array>
#include <QString>

// 64 Kilobytes alloted for ROM.
constexpr std::uint32_t MEMORY_SIZE = 1024 * 64;

class Memory
{
private:
  std::array<u8, MEMORY_SIZE> ram;

  bool load_binary(const char* file_path);

public:
  Memory(const char* file_path);
  Memory();
  bool rom_too_big;

  void read_contents() const;
  QString get_hexdump() const;

  void write_one_byte(u8 data, u16 address);
  void write_two_bytes(u16 data, u16 address);

  u8 read_byte(u16 address) const;
};
