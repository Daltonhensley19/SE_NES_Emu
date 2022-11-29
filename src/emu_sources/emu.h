#pragma once
#include "memory.h"
#include "registers.h"

#include <functional>
#include <map>

using opcode = u16;

struct CPUEmulator
{
    // Emulator data
  Memory mem;
  Registers regs;

  // Internal opcode-function mapper
  std::map<opcode, std::function<void(CPUEmulator&)>> opcode_table;

  // Special emulator states
  bool halt_detected;
  bool unknown_opcode_detected;
  opcode unknown_problem_opcode;

  // Stack helper methods
  u8 get_byte_at_pc_with_offset(u16 offset);
  u8 pop_byte();
  u16 pop_two_bytes();
  void push_two_bytes(u16 word);
  void push_byte(u8 byte);

  // Constructors
  void initialize(const char* file_path);
  CPUEmulator(const char* file_path);
  CPUEmulator();

  // Fetch-decode-execute methods
  void Execute();
  void ExecuteInstr();
};
