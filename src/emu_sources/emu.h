#pragma once
#include "memory.h"
#include "registers.h"

#include <functional>
#include <map>

using opcode = u16;

struct CPUEmulator
{
  Memory mem;
  Registers regs;
  std::map<opcode, std::function<void(CPUEmulator)>> opcode_table;

  u8 get_byte_at_pc_with_offset(u16 offset);
  u16 pop_two_bytes();
  void push_two_bytes(u16 word);
  void push_byte(u8 byte);

  void initialize(const char* file_path);
  CPUEmulator(const char* file_path);
  CPUEmulator();
};
