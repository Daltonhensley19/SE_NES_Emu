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

  void initialize(const char* file_path);
  CPUEmulator(const char* file_path);
  CPUEmulator();
};
