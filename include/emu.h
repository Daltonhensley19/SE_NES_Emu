#pragma once
#include "memory.h"
#include "registers.h"

#include <map>
#include <functional>


using opcode = u16;
 
class CPUEmulator
{
private:
  Memory mem;
  Registers regs;
  std::map<opcode, std::function<void()>> opcode_table;
};