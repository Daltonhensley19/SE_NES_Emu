#pragma once
#include "memory.h"
#include "registers.h"

#include <functional>
#include <map>

using opcode = u16;

class CPUEmulator
{
private:
  Memory mem;
  Registers regs;
  std::map<opcode, std::function<void()>> opcode_table;

public:
  void initialize();
  CPUEmulator();
};