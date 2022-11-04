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

  void initialize(char* file_path);
  CPUEmulator(char* file_path);
};
