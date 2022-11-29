#pragma once

#include "flags.h"
#include "types.h"

class Registers
{
private:
  u16 pc;
  u16 ix;
  u16 iy;

  u8 A;
  u8 B;
  u8 C;
  u8 D;
  u8 E;
  u8 H;
  u8 L;

  u8 A_SHADOW;
  Flags F_SHADOW;
  u8 B_SHADOW;
  u8 C_SHADOW;
  u8 D_SHADOW;
  u8 E_SHADOW;
  u8 H_SHADOW;
  u8 L_SHADOW;

  u8 I;
  u8 R;

public:
  Registers();

  // Even number of `1s` means true, else false
  bool is_even_parity(u8 byte);

  Flags F;
  u16 sp;

  // Register setters
  void set_a(u8 data);
  void set_b(u8 data);
  void set_c(u8 data);
  void set_d(u8 data);
  void set_f(u8 data);
  void set_e(u8 data);
  void set_h(u8 data);
  void set_l(u8 data);

  // Register getters
  u8 get_a() const;
  u8 get_b() const;
  u8 get_c() const;
  u8 get_d() const;
  u8 get_f() const;
  u8 get_e() const;
  u8 get_h() const;
  u8 get_l() const;

  // Register pair getters
  u16 get_hl() const;
  u16 get_de() const;
  u16 get_bc() const;
  u16 get_af() const;

  // Register pair setters
  void set_hl(u8 upper, u8 lower);
  void set_de(u8 upper, u8 lower);
  void set_bc(u8 upper, u8 lower);
  void set_af(u8 upper, u8 lower);

  void set_hl(u16 data);
  void set_de(u16 data);
  void set_bc(u16 data);
  void set_af(u16 data);

  // Shadow register setters
  void set_a_shadow(u8 data);
  void set_b_shadow(u8 data);
  void set_c_shadow(u8 data);
  void set_d_shadow(u8 data);
  void set_f_shadow(u8 data);
  void set_e_shadow(u8 data);
  void set_h_shadow(u8 data);
  void set_l_shadow(u8 data);

  // Shadow register getters
  u8 get_a_shadow() const;
  u8 get_b_shadow() const;
  u8 get_c_shadow() const;
  u8 get_d_shadow() const;
  u8 get_f_shadow() const;
  u8 get_e_shadow() const;
  u8 get_h_shadow() const;
  u8 get_l_shadow() const;

  // Shadow register pair getters
  u16 get_hl_shadow() const;
  u16 get_de_shadow() const;
  u16 get_bc_shadow() const;
  u16 get_af_shadow() const;

  // Shadow register pair setters
  void set_hl_shadow(u8 upper, u8 lower);
  void set_de_shadow(u8 upper, u8 lower);
  void set_bc_shadow(u8 upper, u8 lower);
  void set_af_shadow(u8 upper, u8 lower);

  void set_hl_shadow(u16 data);
  void set_de_shadow(u16 data);
  void set_bc_shadow(u16 data);
  void set_af_shadow(u16 data);

  // Sets the program counter, index registers, and stack pointers.
  void set_pc(u16 data);
  void increment_pc_by(u16 offset); //increments the program counter
  void set_sp(u16 data);
  void set_ix(u16 data);
  void set_iy(u16 data);

  // Special purpose register getters
  u16 get_pc() const;
  u16 get_sp() const;
  u16 get_ix() const;
  u16 get_iy() const;

  // Setters for i and r
  void set_i(u8 data);
  void set_r(u8 data);

  // Getters for i and r
  u8 get_i() const;
  u8 get_r() const;
};
