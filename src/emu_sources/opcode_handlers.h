#pragma once

#include "emu.h"

// Done
void load_a_into_a(CPUEmulator& cpu);
void load_a_into_b(CPUEmulator& cpu);
void load_a_into_c(CPUEmulator& cpu);
void load_a_into_d(CPUEmulator& cpu);
void load_a_into_e(CPUEmulator& cpu);
void load_a_into_h(CPUEmulator& cpu);
void load_a_into_l(CPUEmulator& cpu);

// Done
void load_b_into_a(CPUEmulator& cpu);
void load_b_into_b(CPUEmulator& cpu);
void load_b_into_c(CPUEmulator& cpu);
void load_b_into_d(CPUEmulator& cpu);
void load_b_into_e(CPUEmulator& cpu);
void load_b_into_h(CPUEmulator& cpu);
void load_b_into_l(CPUEmulator& cpu);

// Done
void load_c_into_a(CPUEmulator& cpu);
void load_c_into_b(CPUEmulator& cpu);
void load_c_into_c(CPUEmulator& cpu);
void load_c_into_d(CPUEmulator& cpu);
void load_c_into_e(CPUEmulator& cpu);
void load_c_into_h(CPUEmulator& cpu);
void load_c_into_l(CPUEmulator& cpu);

// Done
void load_d_into_a(CPUEmulator& cpu);
void load_d_into_b(CPUEmulator& cpu);
void load_d_into_c(CPUEmulator& cpu);
void load_d_into_d(CPUEmulator& cpu);
void load_d_into_e(CPUEmulator& cpu);
void load_d_into_h(CPUEmulator& cpu);
void load_d_into_l(CPUEmulator& cpu);

// Done
void load_e_into_a(CPUEmulator& cpu);
void load_e_into_b(CPUEmulator& cpu);
void load_e_into_c(CPUEmulator& cpu);
void load_e_into_d(CPUEmulator& cpu);
void load_e_into_e(CPUEmulator& cpu);
void load_e_into_h(CPUEmulator& cpu);
void load_e_into_l(CPUEmulator& cpu);

// Done
void load_h_into_a(CPUEmulator& cpu);
void load_h_into_b(CPUEmulator& cpu);
void load_h_into_c(CPUEmulator& cpu);
void load_h_into_d(CPUEmulator& cpu);
void load_h_into_e(CPUEmulator& cpu);
void load_h_into_h(CPUEmulator& cpu);
void load_h_into_l(CPUEmulator& cpu);

// Done
void load_l_into_a(CPUEmulator& cpu);
void load_l_into_b(CPUEmulator& cpu);
void load_l_into_c(CPUEmulator& cpu);
void load_l_into_d(CPUEmulator& cpu);
void load_l_into_e(CPUEmulator& cpu);
void load_l_into_h(CPUEmulator& cpu);
void load_l_into_l(CPUEmulator& cpu);

// Done
void load_hl_into_a_indirect(CPUEmulator& cpu);
void load_hl_into_b_indirect(CPUEmulator& cpu);
void load_hl_into_c_indirect(CPUEmulator& cpu);
void load_hl_into_d_indirect(CPUEmulator& cpu);
void load_hl_into_e_indirect(CPUEmulator& cpu);
void load_hl_into_h_indirect(CPUEmulator& cpu);
void load_hl_into_l_indirect(CPUEmulator& cpu);

// Done
void load_bc_into_a_indirect(CPUEmulator& cpu);
void load_de_into_a_indirect(CPUEmulator& cpu);

// Done
void load_a_into_hl_indirect(CPUEmulator& cpu);
void load_b_into_hl_indirect(CPUEmulator& cpu);
void load_c_into_hl_indirect(CPUEmulator& cpu);
void load_d_into_hl_indirect(CPUEmulator& cpu);
void load_e_into_hl_indirect(CPUEmulator& cpu);
void load_f_into_hl_indirect(CPUEmulator& cpu);
void load_l_into_hl_indirect(CPUEmulator& cpu);

// Done
void load_a_into_bc_indirect(CPUEmulator& cpu);
void load_a_into_de_indirect(CPUEmulator& cpu);

// Done
void load_n_into_a_imm(CPUEmulator& cpu);
void load_n_into_b_imm(CPUEmulator& cpu);
void load_n_into_c_imm(CPUEmulator& cpu);
void load_n_into_d_imm(CPUEmulator& cpu);
void load_n_into_e_imm(CPUEmulator& cpu);
void load_n_into_h_imm(CPUEmulator& cpu);
void load_n_into_l_imm(CPUEmulator& cpu);

// Done
void load_n_into_hl_imm(CPUEmulator& cpu);

// Done
void load_a_nn_ext(CPUEmulator& cpu);
void load_nn_a_ext(CPUEmulator& cpu);

// Done
void load_nn_bc_imm(CPUEmulator&);
void load_nn_de_imm(CPUEmulator&);
void load_nn_hl_imm(CPUEmulator&);
void load_nn_sp_imm(CPUEmulator&);

// Done
void load_hl_sp(CPUEmulator&);
void load_hl_nn_indirect(CPUEmulator&);
void load_nn_hl_indirect(CPUEmulator&);

// Done
void push_af(CPUEmulator&);
void push_bc(CPUEmulator&);
void push_de(CPUEmulator&);
void push_hl(CPUEmulator&);

// Done
void pop_af(CPUEmulator&);
void pop_bc(CPUEmulator&);
void pop_de(CPUEmulator&);
void pop_hl(CPUEmulator&);

// Done
void halt(CPUEmulator&);
void nop(CPUEmulator&);

// Done
void exchange_hl_de(CPUEmulator&);
void exchange_af_af(CPUEmulator&);
void exchange_exx(CPUEmulator&);

// Math
void add_a_and_a(CPUEmulator&);
void add_a_and_b(CPUEmulator&);
void add_a_and_c(CPUEmulator&);
void add_a_and_d(CPUEmulator&);
void add_a_and_e(CPUEmulator&);
void add_a_and_h(CPUEmulator&);
void add_a_and_l(CPUEmulator&);

// Math
void add_a_and_a_carry(CPUEmulator&);
void add_a_and_b_carry(CPUEmulator&);
void add_a_and_c_carry(CPUEmulator&);
void add_a_and_d_carry(CPUEmulator&);
void add_a_and_e_carry(CPUEmulator&);
void add_a_and_h_carry(CPUEmulator&);
void add_a_and_l_carry(CPUEmulator&);

// Math
void sub_a_and_a(CPUEmulator&);
void sub_a_and_b(CPUEmulator&);
void sub_a_and_c(CPUEmulator&);
void sub_a_and_d(CPUEmulator&);
void sub_a_and_e(CPUEmulator&);
void sub_a_and_h(CPUEmulator&);
void sub_a_and_l(CPUEmulator&);

// Math
void sub_a_and_a_carry(CPUEmulator&);
void sub_a_and_b_carry(CPUEmulator&);
void sub_a_and_c_carry(CPUEmulator&);
void sub_a_and_d_carry(CPUEmulator&);
void sub_a_and_e_carry(CPUEmulator&);
void sub_a_and_h_carry(CPUEmulator&);
void sub_a_and_l_carry(CPUEmulator&);

// Math
void inc_a(CPUEmulator&);
void inc_b(CPUEmulator&);
void inc_c(CPUEmulator&);
void inc_d(CPUEmulator&);
void inc_e(CPUEmulator&);
void inc_h(CPUEmulator&);
void inc_l(CPUEmulator&);

// Math
void dec_a(CPUEmulator&);
void dec_b(CPUEmulator&);
void dec_c(CPUEmulator&);
void dec_d(CPUEmulator&);
void dec_e(CPUEmulator&);
void dec_h(CPUEmulator&);
void dec_l(CPUEmulator&);

// Math
void add_hl_and_bc(CPUEmulator&);
void add_hl_and_de(CPUEmulator&);
void add_hl_and_hl(CPUEmulator&);
void add_hl_and_sp(CPUEmulator&);

// Logic
void and_a_and_a(CPUEmulator&);
void and_a_and_b(CPUEmulator&);
void and_a_and_c(CPUEmulator&);
void and_a_and_d(CPUEmulator&);
void and_a_and_e(CPUEmulator&);
void and_a_and_h(CPUEmulator&);
void and_a_and_l(CPUEmulator&);

// Logic
void or_a_and_a(CPUEmulator&);
void or_a_and_b(CPUEmulator&);
void or_a_and_c(CPUEmulator&);
void or_a_and_d(CPUEmulator&);
void or_a_and_e(CPUEmulator&);
void or_a_and_h(CPUEmulator&);
void or_a_and_l(CPUEmulator&);

// Logic
void xor_a_and_a(CPUEmulator&);
void xor_a_and_b(CPUEmulator&);
void xor_a_and_c(CPUEmulator&);
void xor_a_and_d(CPUEmulator&);
void xor_a_and_e(CPUEmulator&);
void xor_a_and_h(CPUEmulator&);
void xor_a_and_l(CPUEmulator&);

// Logic
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

