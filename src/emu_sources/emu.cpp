#include "emu.h"
#include "opcode_handlers.h"

void CPUEmulator::initialize(const char* file_path)
{
  this->mem  = Memory(file_path);
  this->regs = Registers();

  this->opcode_table.insert({{0xFFFF, load_a_into_b}});
}

CPUEmulator::CPUEmulator(const char* file_path)
{
  this->mem  = Memory(file_path);
  this->regs = Registers();
}

CPUEmulator::CPUEmulator() {};
// test
