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
