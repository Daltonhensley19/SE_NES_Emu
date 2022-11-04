#include "../include/emu.h"
#include "../include/opcode_handlers.h"

void CPUEmulator::initialize(char* file_path)
{
  this->mem  = Memory(file_path);
  this->regs = Registers();


  this->opcode_table.insert({{0xFFFF, load_a_into_b}});
}
