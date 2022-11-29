#pragma once

#include "emu.h"

// Loads the a register into other registers
void load_a_into_a(CPUEmulator& cpu);
void load_a_into_b(CPUEmulator& cpu);
void load_a_into_c(CPUEmulator& cpu);
void load_a_into_d(CPUEmulator& cpu);
void load_a_into_e(CPUEmulator& cpu);
void load_a_into_h(CPUEmulator& cpu);
void load_a_into_l(CPUEmulator& cpu);

// Loads the b register into other registers
void load_b_into_a(CPUEmulator& cpu);
void load_b_into_b(CPUEmulator& cpu);
void load_b_into_c(CPUEmulator& cpu);
void load_b_into_d(CPUEmulator& cpu);
void load_b_into_e(CPUEmulator& cpu);
void load_b_into_h(CPUEmulator& cpu);
void load_b_into_l(CPUEmulator& cpu);

// Loads the c register into other registers
void load_c_into_a(CPUEmulator& cpu);
void load_c_into_b(CPUEmulator& cpu);
void load_c_into_c(CPUEmulator& cpu);
void load_c_into_d(CPUEmulator& cpu);
void load_c_into_e(CPUEmulator& cpu);
void load_c_into_h(CPUEmulator& cpu);
void load_c_into_l(CPUEmulator& cpu);

// Loads the d register into other registers
void load_d_into_a(CPUEmulator& cpu);
void load_d_into_b(CPUEmulator& cpu);
void load_d_into_c(CPUEmulator& cpu);
void load_d_into_d(CPUEmulator& cpu);
void load_d_into_e(CPUEmulator& cpu);
void load_d_into_h(CPUEmulator& cpu);
void load_d_into_l(CPUEmulator& cpu);

// Loads the e register into other registers
void load_e_into_a(CPUEmulator& cpu);
void load_e_into_b(CPUEmulator& cpu);
void load_e_into_c(CPUEmulator& cpu);
void load_e_into_d(CPUEmulator& cpu);
void load_e_into_e(CPUEmulator& cpu);
void load_e_into_h(CPUEmulator& cpu);
void load_e_into_l(CPUEmulator& cpu);

// Loads the h register into other registers
void load_h_into_a(CPUEmulator& cpu);
void load_h_into_b(CPUEmulator& cpu);
void load_h_into_c(CPUEmulator& cpu);
void load_h_into_d(CPUEmulator& cpu);
void load_h_into_e(CPUEmulator& cpu);
void load_h_into_h(CPUEmulator& cpu);
void load_h_into_l(CPUEmulator& cpu);

// Loads the l register into other registers
void load_l_into_a(CPUEmulator& cpu);
void load_l_into_b(CPUEmulator& cpu);
void load_l_into_c(CPUEmulator& cpu);
void load_l_into_d(CPUEmulator& cpu);
void load_l_into_e(CPUEmulator& cpu);
void load_l_into_h(CPUEmulator& cpu);
void load_l_into_l(CPUEmulator& cpu);

// Loads the hl register pair into other registers
void load_hl_into_a_indirect(CPUEmulator& cpu);
void load_hl_into_b_indirect(CPUEmulator& cpu);
void load_hl_into_c_indirect(CPUEmulator& cpu);
void load_hl_into_d_indirect(CPUEmulator& cpu);
void load_hl_into_e_indirect(CPUEmulator& cpu);
void load_hl_into_h_indirect(CPUEmulator& cpu);
void load_hl_into_l_indirect(CPUEmulator& cpu);

// Loads the bc register pair and the de register pair into a
void load_bc_into_a_indirect(CPUEmulator& cpu);
void load_de_into_a_indirect(CPUEmulator& cpu);

// Loads registers into the hl register pair, with the low-order portion in l and the high-order portion in h
void load_a_into_hl_indirect(CPUEmulator& cpu);
void load_b_into_hl_indirect(CPUEmulator& cpu);
void load_c_into_hl_indirect(CPUEmulator& cpu);
void load_d_into_hl_indirect(CPUEmulator& cpu);
void load_e_into_hl_indirect(CPUEmulator& cpu);
void load_f_into_hl_indirect(CPUEmulator& cpu);
void load_l_into_hl_indirect(CPUEmulator& cpu);

// Loads the a register into the bc and de register pairs, with the low-order portion in c (or e) and the high-order portion in b (or d)
void load_a_into_bc_indirect(CPUEmulator& cpu);
void load_a_into_de_indirect(CPUEmulator& cpu);

// Loads the n register into other registers
void load_n_into_a_imm(CPUEmulator& cpu);
void load_n_into_b_imm(CPUEmulator& cpu);
void load_n_into_c_imm(CPUEmulator& cpu);
void load_n_into_d_imm(CPUEmulator& cpu);
void load_n_into_e_imm(CPUEmulator& cpu);
void load_n_into_h_imm(CPUEmulator& cpu);
void load_n_into_l_imm(CPUEmulator& cpu);

// Loads n register into the hl register pair
void load_n_into_hl_imm(CPUEmulator& cpu);

// loads a into the nn address and vice versa
void load_a_nn_ext(CPUEmulator& cpu);
void load_nn_a_ext(CPUEmulator& cpu);

// Loads the nn address into various register pairs
void load_nn_bc_imm(CPUEmulator&);
void load_nn_de_imm(CPUEmulator&);
void load_nn_hl_imm(CPUEmulator&);
void load_nn_sp_imm(CPUEmulator&);

// Loads the register pair hl into the stack pointer (SP)
void load_hl_sp(CPUEmulator&);

// Loads the register pair hl into the nn address indirectly and vice versa
void load_hl_nn_indirect(CPUEmulator&);
void load_nn_hl_indirect(CPUEmulator&);

// Pushs
void push_af(CPUEmulator&);
void push_bc(CPUEmulator&);
void push_de(CPUEmulator&);
void push_hl(CPUEmulator&);

// Snap
// Crackle
// Pop
void pop_af(CPUEmulator&);
void pop_bc(CPUEmulator&);
void pop_de(CPUEmulator&);
void pop_hl(CPUEmulator&);

// Ends the program
void halt(CPUEmulator&);

// CPU does nothing during this cycle
void nop(CPUEmulator&);

// Exchanges contents of register pairs
void exchange_hl_de(CPUEmulator&);
void exchange_af_af(CPUEmulator&);
void exchange_exx(CPUEmulator&);

// Addition
void add_a_and_a(CPUEmulator&);
void add_a_and_b(CPUEmulator&);
void add_a_and_c(CPUEmulator&);
void add_a_and_d(CPUEmulator&);
void add_a_and_e(CPUEmulator&);
void add_a_and_h(CPUEmulator&);
void add_a_and_l(CPUEmulator&);

// Addition with carry flag
void add_a_and_a_carry(CPUEmulator&);
void add_a_and_b_carry(CPUEmulator&);
void add_a_and_c_carry(CPUEmulator&);
void add_a_and_d_carry(CPUEmulator&);
void add_a_and_e_carry(CPUEmulator&);
void add_a_and_h_carry(CPUEmulator&);
void add_a_and_l_carry(CPUEmulator&);

// Subtraction
void sub_a_and_a(CPUEmulator&);
void sub_a_and_b(CPUEmulator&);
void sub_a_and_c(CPUEmulator&);
void sub_a_and_d(CPUEmulator&);
void sub_a_and_e(CPUEmulator&);
void sub_a_and_h(CPUEmulator&);
void sub_a_and_l(CPUEmulator&);

// Subtraction with carry flag
void sub_a_and_a_carry(CPUEmulator&);
void sub_a_and_b_carry(CPUEmulator&);
void sub_a_and_c_carry(CPUEmulator&);
void sub_a_and_d_carry(CPUEmulator&);
void sub_a_and_e_carry(CPUEmulator&);
void sub_a_and_h_carry(CPUEmulator&);
void sub_a_and_l_carry(CPUEmulator&);

// Increments register 
void inc_a(CPUEmulator&);
void inc_b(CPUEmulator&);
void inc_c(CPUEmulator&);
void inc_d(CPUEmulator&);
void inc_e(CPUEmulator&);
void inc_h(CPUEmulator&);
void inc_l(CPUEmulator&);

// Decrements register 
void dec_a(CPUEmulator&);
void dec_b(CPUEmulator&);
void dec_c(CPUEmulator&);
void dec_d(CPUEmulator&);
void dec_e(CPUEmulator&);
void dec_h(CPUEmulator&);
void dec_l(CPUEmulator&);

// Decrements register pairs 
void dec_bc(CPUEmulator&);
void dec_de(CPUEmulator&);
void dec_hl(CPUEmulator&);
void dec_sp(CPUEmulator&);

// Increments register pairs
void inc_bc(CPUEmulator&);
void inc_de(CPUEmulator&);
void inc_hl(CPUEmulator&);
void inc_sp(CPUEmulator&);

// Adds register pairs
void add_hl_and_bc(CPUEmulator&);
void add_hl_and_de(CPUEmulator&);
void add_hl_and_hl(CPUEmulator&);
void add_hl_and_sp(CPUEmulator&);

// AND logic statements
void and_a_and_a(CPUEmulator&);
void and_a_and_b(CPUEmulator&);
void and_a_and_c(CPUEmulator&);
void and_a_and_d(CPUEmulator&);
void and_a_and_e(CPUEmulator&);
void and_a_and_h(CPUEmulator&);
void and_a_and_l(CPUEmulator&);

// OR logic statements
void or_a_and_a(CPUEmulator&);
void or_a_and_b(CPUEmulator&);
void or_a_and_c(CPUEmulator&);
void or_a_and_d(CPUEmulator&);
void or_a_and_e(CPUEmulator&);
void or_a_and_h(CPUEmulator&);
void or_a_and_l(CPUEmulator&);

// XOR logic statements
void xor_a_and_a(CPUEmulator&);
void xor_a_and_b(CPUEmulator&);
void xor_a_and_c(CPUEmulator&);
void xor_a_and_d(CPUEmulator&);
void xor_a_and_e(CPUEmulator&);
void xor_a_and_h(CPUEmulator&);
void xor_a_and_l(CPUEmulator&);

// Compare logic statments
void cp_a_and_a(CPUEmulator&);
void cp_a_and_b(CPUEmulator&);
void cp_a_and_c(CPUEmulator&);
void cp_a_and_d(CPUEmulator&);
void cp_a_and_e(CPUEmulator&);
void cp_a_and_h(CPUEmulator&);
void cp_a_and_l(CPUEmulator&);

// Jumps 
void jump_nn_immed(CPUEmulator&);
void jump_carry_nn(CPUEmulator&);
void jump_nocarry_nn(CPUEmulator&);
void jump_zero_nn(CPUEmulator&);
void jump_nonzero_nn(CPUEmulator&);
void jump_parity_odd_nn(CPUEmulator&);
void jump_parity_even_nn(CPUEmulator&);
void jump_sign_neg_nn(CPUEmulator&);
void jump_sign_pos_nn(CPUEmulator&);

// Calls
void call_nn_immed(CPUEmulator&);
void call_carry_nn(CPUEmulator&);
void call_nocarry_nn(CPUEmulator&);
void call_zero_nn(CPUEmulator&);
void call_nonzero_nn(CPUEmulator&);
void call_parity_odd_nn(CPUEmulator&);
void call_parity_even_nn(CPUEmulator&);
void call_sign_neg_nn(CPUEmulator&);
void call_sign_pos_nn(CPUEmulator&);

// Returns 
void return_nn_immed(CPUEmulator&);
void return_carry(CPUEmulator&);
void return_nocarry(CPUEmulator&);
void return_zero(CPUEmulator&);
void return_nonzero(CPUEmulator&);
void return_parity_odd(CPUEmulator&);
void return_parity_even(CPUEmulator&);
void return_sign_neg(CPUEmulator&);
void return_sign_pos(CPUEmulator&);

