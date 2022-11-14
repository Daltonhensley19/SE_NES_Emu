#include "emu.h"
#include "opcode_handlers.h"

auto CPUEmulator::initialize(const char* file_path) -> void
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

CPUEmulator::CPUEmulator(){};

auto CPUEmulator::get_byte_at_pc_with_offset(u16 offset) -> u8
{
  return this->mem.read_byte(this->regs.get_pc() + offset);
}

auto CPUEmulator::pop_two_bytes() -> u16
{
  u8 lower = this->mem.read_byte(regs.sp++);
  u8 upper = this->mem.read_byte(regs.sp++);

  return (upper << BYTE_SHIFT) | lower;
}

auto CPUEmulator::push_two_bytes(u16 word) -> void
{
  u8 upper = (word >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = word & MAX_BYTE_SIZE;

  mem.write_one_byte(upper, --regs.sp);
  mem.write_one_byte(lower, --regs.sp);
}

auto CPUEmulator::push_byte(u8 byte) -> void
{
  mem.write_one_byte(byte, --regs.sp);
}

