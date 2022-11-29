#include "emu.h"
#include "opcode_handlers.h"
#include "opcodes.h"

#include <QDebug>

auto CPUEmulator::initialize(const char* file_path) -> void
{

  // Initialize memory and registers
  this->mem  = Memory(file_path);
  this->regs = Registers();

  // Special opcodes Group
  this->opcode_table.insert({{(u16)MiscOpcode::HALT, halt}});
  this->opcode_table.insert({{(u16)MiscOpcode::NOP, nop}});

  // 8-bit Load Group (A-reg -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::A_A_Direct, load_a_into_a}});
  this->opcode_table.insert({{(u16)EightBitLoad::A_B_Direct, load_a_into_b}});
  this->opcode_table.insert({{(u16)EightBitLoad::A_C_Direct, load_a_into_c}});
  this->opcode_table.insert({{(u16)EightBitLoad::A_D_Direct, load_a_into_d}});
  this->opcode_table.insert({{(u16)EightBitLoad::A_E_Direct, load_a_into_e}});
  this->opcode_table.insert({{(u16)EightBitLoad::A_H_Direct, load_a_into_h}});
  this->opcode_table.insert({{(u16)EightBitLoad::A_L_Direct, load_a_into_l}});

  // 8-bit Load Group (B-reg -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::B_A_Direct, load_b_into_a}});
  this->opcode_table.insert({{(u16)EightBitLoad::B_B_Direct, load_b_into_b}});
  this->opcode_table.insert({{(u16)EightBitLoad::B_C_Direct, load_b_into_c}});
  this->opcode_table.insert({{(u16)EightBitLoad::B_D_Direct, load_b_into_d}});
  this->opcode_table.insert({{(u16)EightBitLoad::B_E_Direct, load_b_into_e}});
  this->opcode_table.insert({{(u16)EightBitLoad::B_H_Direct, load_b_into_h}});
  this->opcode_table.insert({{(u16)EightBitLoad::B_L_Direct, load_b_into_l}});

  // 8-bit Load Group (C-reg -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::C_A_Direct, load_c_into_a}});
  this->opcode_table.insert({{(u16)EightBitLoad::C_B_Direct, load_c_into_b}});
  this->opcode_table.insert({{(u16)EightBitLoad::C_C_Direct, load_c_into_c}});
  this->opcode_table.insert({{(u16)EightBitLoad::C_D_Direct, load_c_into_d}});
  this->opcode_table.insert({{(u16)EightBitLoad::C_E_Direct, load_c_into_e}});
  this->opcode_table.insert({{(u16)EightBitLoad::C_H_Direct, load_c_into_h}});
  this->opcode_table.insert({{(u16)EightBitLoad::C_L_Direct, load_c_into_l}});

  // 8-bit Load Group (D-reg -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::D_A_Direct, load_d_into_a}});
  this->opcode_table.insert({{(u16)EightBitLoad::D_B_Direct, load_d_into_b}});
  this->opcode_table.insert({{(u16)EightBitLoad::D_C_Direct, load_d_into_c}});
  this->opcode_table.insert({{(u16)EightBitLoad::D_D_Direct, load_d_into_d}});
  this->opcode_table.insert({{(u16)EightBitLoad::D_E_Direct, load_d_into_e}});
  this->opcode_table.insert({{(u16)EightBitLoad::D_H_Direct, load_d_into_h}});
  this->opcode_table.insert({{(u16)EightBitLoad::D_L_Direct, load_d_into_l}});

  // 8-bit Load Group (E-reg -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::E_A_Direct, load_e_into_a}});
  this->opcode_table.insert({{(u16)EightBitLoad::E_B_Direct, load_e_into_b}});
  this->opcode_table.insert({{(u16)EightBitLoad::E_C_Direct, load_e_into_c}});
  this->opcode_table.insert({{(u16)EightBitLoad::E_D_Direct, load_e_into_d}});
  this->opcode_table.insert({{(u16)EightBitLoad::E_E_Direct, load_e_into_e}});
  this->opcode_table.insert({{(u16)EightBitLoad::E_H_Direct, load_e_into_h}});
  this->opcode_table.insert({{(u16)EightBitLoad::E_L_Direct, load_e_into_l}});

  // 8-bit Load Group (H-reg -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::H_A_Direct, load_h_into_a}});
  this->opcode_table.insert({{(u16)EightBitLoad::H_B_Direct, load_h_into_b}});
  this->opcode_table.insert({{(u16)EightBitLoad::H_C_Direct, load_h_into_c}});
  this->opcode_table.insert({{(u16)EightBitLoad::H_D_Direct, load_h_into_d}});
  this->opcode_table.insert({{(u16)EightBitLoad::H_E_Direct, load_h_into_e}});
  this->opcode_table.insert({{(u16)EightBitLoad::H_H_Direct, load_h_into_h}});
  this->opcode_table.insert({{(u16)EightBitLoad::H_L_Direct, load_h_into_l}});

  // 8-bit Load Group (L-reg -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::L_A_Direct, load_l_into_a}});
  this->opcode_table.insert({{(u16)EightBitLoad::L_B_Direct, load_l_into_b}});
  this->opcode_table.insert({{(u16)EightBitLoad::L_C_Direct, load_l_into_c}});
  this->opcode_table.insert({{(u16)EightBitLoad::L_D_Direct, load_l_into_d}});
  this->opcode_table.insert({{(u16)EightBitLoad::L_E_Direct, load_l_into_e}});
  this->opcode_table.insert({{(u16)EightBitLoad::L_H_Direct, load_l_into_h}});
  this->opcode_table.insert({{(u16)EightBitLoad::L_L_Direct, load_l_into_l}});

  // 8-bit Load Group (n -> *-reg)
  this->opcode_table.insert({{(u16)EightBitLoad::n_A_Imm, load_n_into_a_imm}});
  this->opcode_table.insert({{(u16)EightBitLoad::n_B_Imm, load_n_into_b_imm}});
  this->opcode_table.insert({{(u16)EightBitLoad::n_C_Imm, load_n_into_c_imm}});
  this->opcode_table.insert({{(u16)EightBitLoad::n_D_Imm, load_n_into_d_imm}});
  this->opcode_table.insert({{(u16)EightBitLoad::n_E_Imm, load_n_into_e_imm}});
  this->opcode_table.insert({{(u16)EightBitLoad::n_H_Imm, load_n_into_h_imm}});
  this->opcode_table.insert({{(u16)EightBitLoad::n_L_Imm, load_n_into_l_imm}});

  // 16-bit Load Group
  this->opcode_table.insert({{(u16)SixteenBitLoad::nn_BC_imm, load_nn_bc_imm}});
  this->opcode_table.insert({{(u16)SixteenBitLoad::nn_DE_imm, load_nn_de_imm}});
  this->opcode_table.insert({{(u16)SixteenBitLoad::nn_HL_imm, load_nn_hl_imm}});
  this->opcode_table.insert({{(u16)SixteenBitLoad::nn_SP_imm, load_nn_sp_imm}});
  this->opcode_table.insert({{(u16)SixteenBitLoad::HL_SP, load_hl_sp}});
  this->opcode_table.insert(
    {{(u16)SixteenBitLoad::HL_nn_Indirect, load_hl_nn_indirect}});
  this->opcode_table.insert(
    {{(u16)SixteenBitLoad::nn_HL_Indirect, load_nn_hl_indirect}});

  // Stack Push
  this->opcode_table.insert({{(u16)Stack::push_af, push_af}});
  this->opcode_table.insert({{(u16)Stack::push_bc, push_bc}});
  this->opcode_table.insert({{(u16)Stack::push_de, push_de}});
  this->opcode_table.insert({{(u16)Stack::push_hl, push_hl}});

  // Stack Pop Group
  this->opcode_table.insert({{(u16)Stack::pop_af, pop_af}});
  this->opcode_table.insert({{(u16)Stack::pop_bc, pop_bc}});
  this->opcode_table.insert({{(u16)Stack::pop_de, pop_de}});
  this->opcode_table.insert({{(u16)Stack::pop_hl, pop_hl}});

  // Exchange Group
  this->opcode_table.insert({{(u16)Exchange::hl_ex_de, exchange_hl_de}});
  this->opcode_table.insert({{(u16)Exchange::af_ex_af, exchange_af_af}});
  this->opcode_table.insert({{(u16)Exchange::exx, exchange_exx}});

  // Math and Logic Group (Adds)
  this->opcode_table.insert({{(u16)EightBitMath::A_add_A, add_a_and_a}});
  this->opcode_table.insert({{(u16)EightBitMath::A_add_B, add_a_and_b}});
  this->opcode_table.insert({{(u16)EightBitMath::A_add_C, add_a_and_c}});
  this->opcode_table.insert({{(u16)EightBitMath::A_add_D, add_a_and_d}});
  this->opcode_table.insert({{(u16)EightBitMath::A_add_E, add_a_and_e}});
  this->opcode_table.insert({{(u16)EightBitMath::A_add_H, add_a_and_h}});
  this->opcode_table.insert({{(u16)EightBitMath::A_add_L, add_a_and_l}});

  // Math and Logic Group (Adds + Carry)
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_addcarry_A, add_a_and_a_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_addcarry_B, add_a_and_b_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_addcarry_C, add_a_and_c_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_addcarry_D, add_a_and_d_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_addcarry_E, add_a_and_e_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_addcarry_H, add_a_and_h_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_addcarry_L, add_a_and_l_carry}});

  // Math and Logic Group (Subs)
  this->opcode_table.insert({{(u16)EightBitMath::A_sub_A, sub_a_and_a}});
  this->opcode_table.insert({{(u16)EightBitMath::A_sub_B, sub_a_and_b}});
  this->opcode_table.insert({{(u16)EightBitMath::A_sub_C, sub_a_and_c}});
  this->opcode_table.insert({{(u16)EightBitMath::A_sub_D, sub_a_and_d}});
  this->opcode_table.insert({{(u16)EightBitMath::A_sub_E, sub_a_and_e}});
  this->opcode_table.insert({{(u16)EightBitMath::A_sub_H, sub_a_and_h}});
  this->opcode_table.insert({{(u16)EightBitMath::A_sub_L, sub_a_and_l}});

  // Math and Logic Group (Subs + Carry)
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_subcarry_A, sub_a_and_a_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_subcarry_B, sub_a_and_b_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_subcarry_C, sub_a_and_c_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_subcarry_D, sub_a_and_d_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_subcarry_E, sub_a_and_e_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_subcarry_H, sub_a_and_h_carry}});
  this->opcode_table.insert(
    {{(u16)EightBitMath::A_subcarry_L, sub_a_and_l_carry}});

  // Math and Logic Group (Ands)
  this->opcode_table.insert({{(u16)EightBitMath::A_and_A, and_a_and_a}});
  this->opcode_table.insert({{(u16)EightBitMath::A_and_B, and_a_and_b}});
  this->opcode_table.insert({{(u16)EightBitMath::A_and_C, and_a_and_c}});
  this->opcode_table.insert({{(u16)EightBitMath::A_and_D, and_a_and_d}});
  this->opcode_table.insert({{(u16)EightBitMath::A_and_E, and_a_and_e}});
  this->opcode_table.insert({{(u16)EightBitMath::A_and_H, and_a_and_h}});
  this->opcode_table.insert({{(u16)EightBitMath::A_and_L, and_a_and_l}});

  // Math and Logic Group (Xors)
  this->opcode_table.insert({{(u16)EightBitMath::A_xor_A, xor_a_and_a}});
  this->opcode_table.insert({{(u16)EightBitMath::A_xor_B, xor_a_and_b}});
  this->opcode_table.insert({{(u16)EightBitMath::A_xor_C, xor_a_and_c}});
  this->opcode_table.insert({{(u16)EightBitMath::A_xor_D, xor_a_and_d}});
  this->opcode_table.insert({{(u16)EightBitMath::A_xor_E, xor_a_and_e}});
  this->opcode_table.insert({{(u16)EightBitMath::A_xor_H, xor_a_and_h}});
  this->opcode_table.insert({{(u16)EightBitMath::A_xor_L, xor_a_and_l}});

  // Math and Logic Group (Ors)
  this->opcode_table.insert({{(u16)EightBitMath::A_or_A, or_a_and_a}});
  this->opcode_table.insert({{(u16)EightBitMath::A_or_B, or_a_and_b}});
  this->opcode_table.insert({{(u16)EightBitMath::A_or_C, or_a_and_c}});
  this->opcode_table.insert({{(u16)EightBitMath::A_or_D, or_a_and_d}});
  this->opcode_table.insert({{(u16)EightBitMath::A_or_E, or_a_and_e}});
  this->opcode_table.insert({{(u16)EightBitMath::A_or_H, or_a_and_h}});
  this->opcode_table.insert({{(u16)EightBitMath::A_or_L, or_a_and_l}});

  // Math and Logic Group (Cps)
  this->opcode_table.insert({{(u16)EightBitMath::A_cp_A, cp_a_and_a}});
  this->opcode_table.insert({{(u16)EightBitMath::A_cp_B, cp_a_and_b}});
  this->opcode_table.insert({{(u16)EightBitMath::A_cp_C, cp_a_and_c}});
  this->opcode_table.insert({{(u16)EightBitMath::A_cp_D, cp_a_and_d}});
  this->opcode_table.insert({{(u16)EightBitMath::A_cp_E, cp_a_and_e}});
  this->opcode_table.insert({{(u16)EightBitMath::A_cp_H, cp_a_and_h}});
  this->opcode_table.insert({{(u16)EightBitMath::A_cp_L, cp_a_and_l}});

  // Math and Logic Group (inc)
  this->opcode_table.insert({{(u16)EightBitMath::inc_A, inc_a}});
  this->opcode_table.insert({{(u16)EightBitMath::inc_B, inc_b}});
  this->opcode_table.insert({{(u16)EightBitMath::inc_C, inc_c}});
  this->opcode_table.insert({{(u16)EightBitMath::inc_D, inc_d}});
  this->opcode_table.insert({{(u16)EightBitMath::inc_E, inc_e}});
  this->opcode_table.insert({{(u16)EightBitMath::inc_H, inc_h}});
  this->opcode_table.insert({{(u16)EightBitMath::inc_L, inc_l}});

  // Math and Logic Group (dec)
  this->opcode_table.insert({{(u16)EightBitMath::dec_A, dec_a}});
  this->opcode_table.insert({{(u16)EightBitMath::dec_B, dec_b}});
  this->opcode_table.insert({{(u16)EightBitMath::dec_C, dec_c}});
  this->opcode_table.insert({{(u16)EightBitMath::dec_D, dec_d}});
  this->opcode_table.insert({{(u16)EightBitMath::dec_E, dec_e}});
  this->opcode_table.insert({{(u16)EightBitMath::dec_H, dec_h}});
  this->opcode_table.insert({{(u16)EightBitMath::dec_L, dec_l}});

  // Jumps Group
  this->opcode_table.insert({{(u16)Jump::nn_JP_imm, jump_nn_immed}});
  this->opcode_table.insert({{(u16)Jump::nn_JP_carry, jump_carry_nn}});
  this->opcode_table.insert({{(u16)Jump::nn_JP_nocarry, jump_nocarry_nn}});
  this->opcode_table.insert({{(u16)Jump::nn_JP_zero, jump_zero_nn}});
  this->opcode_table.insert({{(u16)Jump::nn_JP_nozero, jump_nonzero_nn}});
  this->opcode_table.insert(
    {{(u16)Jump::nn_JP_parity_even, jump_parity_even_nn}});
  this->opcode_table.insert(
    {{(u16)Jump::nn_JP_parity_odd, jump_parity_odd_nn}});
  this->opcode_table.insert({{(u16)Jump::nn_JP_neg_sign, jump_sign_neg_nn}});
  this->opcode_table.insert({{(u16)Jump::nn_JP_pos_sign, jump_sign_pos_nn}});

  // Calls Group
  this->opcode_table.insert({{(u16)Call::nn_CALL_imm, call_nn_immed}});
  this->opcode_table.insert({{(u16)Call::nn_CALL_carry, call_carry_nn}});
  this->opcode_table.insert({{(u16)Call::nn_CALL_nocarry, call_nocarry_nn}});
  this->opcode_table.insert({{(u16)Call::nn_CALL_zero, call_zero_nn}});
  this->opcode_table.insert({{(u16)Call::nn_CALL_nocarry, call_nonzero_nn}});
  this->opcode_table.insert(
    {{(u16)Call::nn_CALL_parity_even, call_parity_even_nn}});
  this->opcode_table.insert(
    {{(u16)Call::nn_CALL_parity_odd, call_parity_odd_nn}});
  this->opcode_table.insert({{(u16)Call::nn_CALL_pos_sign, call_sign_pos_nn}});
  this->opcode_table.insert({{(u16)Call::nn_CALL_neg_sign, call_nn_immed}});

  // Returns Group
  this->opcode_table.insert({{(u16)Return::nn_RE_uncond, return_nn_immed}});
  this->opcode_table.insert({{(u16)Return::nn_RE_carry, return_carry}});
  this->opcode_table.insert({{(u16)Return::nn_RE_nocarry, return_nocarry}});
  this->opcode_table.insert({{(u16)Return::nn_RE_zero, return_zero}});
  this->opcode_table.insert({{(u16)Return::nn_RE_nocarry, return_nonzero}});
  this->opcode_table.insert(
    {{(u16)Return::nn_RE_parity_even, return_parity_even}});
  this->opcode_table.insert(
    {{(u16)Return::nn_RE_parity_odd, return_parity_odd}});
  this->opcode_table.insert({{(u16)Return::nn_RE_pos_sign, return_sign_pos}});
  this->opcode_table.insert({{(u16)Return::nn_RE_neg_sign, return_sign_neg}});
}

CPUEmulator::CPUEmulator(const char* file_path)
{
  this->mem  = Memory(file_path);
  this->regs = Registers();
}

CPUEmulator::CPUEmulator(){};

// Method to get the byte pointed to by the `pc` reg
auto CPUEmulator::get_byte_at_pc_with_offset(u16 offset) -> u8
{
  return this->mem.read_byte(this->regs.get_pc() + offset);
}

// Stack helper method to pop two bytes off Z80's stack
auto CPUEmulator::pop_two_bytes() -> u16
{
  u8 lower = this->mem.read_byte(regs.sp++);
  u8 upper = this->mem.read_byte(regs.sp++);

  return (upper << BYTE_SHIFT) | lower;
}

// Stack helper method to pop one byte off Z80's stack
auto CPUEmulator::pop_byte() -> u8
{
  u8 old_data = this->mem.read_byte(regs.sp++);

  return old_data;
}

// Stack helper method to push two bytes on Z80's stack
auto CPUEmulator::push_two_bytes(u16 word) -> void
{
  u8 upper = (word >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = word & MAX_BYTE_SIZE;

  mem.write_one_byte(upper, --regs.sp);
  mem.write_one_byte(lower, --regs.sp);
}

// Stack helper method to push one byte on Z80's stack
auto CPUEmulator::push_byte(u8 byte) -> void
{
  mem.write_one_byte(byte, --regs.sp);
}

// Fetch-Decode-Execute method (execute all)
auto CPUEmulator::Execute() -> void
{
  this->halt_detected           = false;
  this->unknown_opcode_detected = false;

  // Fetch-decode-execute while HALT is not found
  while (!this->halt_detected)
  {
    // Fetch opcode
    auto opcode = this->mem.read_byte(this->regs.get_pc());

    // Decode opcode
    if (auto search = this->opcode_table.find(opcode);
        search != this->opcode_table.end())
    {
      auto decoded_instruction = this->opcode_table[opcode];

      // Execute decoded instruction
      decoded_instruction(*this);
    }
    else
    {
      // Unknown opcode written in test ROM!
      unknown_opcode_detected = true;
      unknown_problem_opcode  = opcode;
      break;
    }
  }
}

// Fetch-Decode-Execute method (execute single)
auto CPUEmulator::ExecuteInstr() -> void
{
  this->halt_detected           = false;
  this->unknown_opcode_detected = false;

  // Fetch-decode-execute if HALT is not found
  if (!this->halt_detected)
  {
    // Fetch opcode
    auto opcode = this->mem.read_byte(this->regs.get_pc());

    // Decode opcode
    if (auto search = this->opcode_table.find(opcode);
        search != this->opcode_table.end())
    {
      auto decoded_instruction = this->opcode_table[opcode];

      // Execute decoded instruction
      decoded_instruction(*this);
    }
    else
    {
      // Unknown opcode written in test ROM!
      unknown_opcode_detected = true;
      unknown_problem_opcode  = opcode;
    }
  }
}
