#include "registers.h"
#include "types.h"

// IMPORTANT: this code was generate using Python.
// I could not be bothered to write these by hand!

// I personally hate getters and setters, but here we are. My least favorite
// consequence of OOP design.

Registers::Registers()
{
  this->pc = 0;
  this->sp = 0;
  this->ix = 0;
  this->iy = 0;

  this->A = 1;
  this->F = Flags{};
  this->B = 2;
  this->C = 3;
  this->D = 4;
  this->E = 5;
  this->H = 6;
  this->L = 7;

  this->A_SHADOW = 8;
  this->F_SHADOW = Flags{};
  this->B_SHADOW = 9;
  this->C_SHADOW = 10;
  this->D_SHADOW = 11;
  this->E_SHADOW = 12;
  this->H_SHADOW = 13;
  this->L_SHADOW = 14;

  this->I = 0;
  this->R = 0;
}

auto Registers::set_a(u8 data) -> void
{
  this->A = data;
}

auto Registers::set_b(u8 data) -> void
{
  this->B = data;
}

auto Registers::set_c(u8 data) -> void
{
  this->C = data;
}

auto Registers::set_d(u8 data) -> void
{
  this->D = data;
}

auto Registers::set_f(u8 data) -> void
{
  this->F.batch_set(data);
}

auto Registers::set_e(u8 data) -> void
{
  this->E = data;
}

auto Registers::set_h(u8 data) -> void
{
  this->H = data;
}

auto Registers::set_l(u8 data) -> void
{
  this->L = data;
}

auto Registers::set_a_shadow(u8 data) -> void
{
  this->A_SHADOW = data;
}

auto Registers::set_b_shadow(u8 data) -> void
{
  this->B_SHADOW = data;
}

auto Registers::set_c_shadow(u8 data) -> void
{
  this->C_SHADOW = data;
}

auto Registers::set_d_shadow(u8 data) -> void
{
  this->D_SHADOW = data;
}

auto Registers::set_f_shadow(u8 data) -> void
{
  this->F_SHADOW.batch_set(data);
}

auto Registers::set_e_shadow(u8 data) -> void
{
  this->E_SHADOW = data;
}

auto Registers::set_h_shadow(u8 data) -> void
{
  this->H_SHADOW = data;
}

auto Registers::set_l_shadow(u8 data) -> void
{
  this->L_SHADOW = data;
}

auto Registers::set_pc(u16 data) -> void
{
  this->pc = data;
}
auto Registers::set_sp(u16 data) -> void
{
  this->sp = data;
}

auto Registers::set_ix(u16 data) -> void
{
  this->ix = data;
}

auto Registers::set_iy(u16 data) -> void
{
  this->iy = data;
}

auto Registers::set_hl(u16 data) -> void
{
  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_h(upper);
  this->set_l(lower);
}
auto Registers::set_de(u16 data) -> void
{

  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_d(upper);
  this->set_e(lower);
}

auto Registers::set_bc(u16 data) -> void
{

  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_b(upper);
  this->set_c(lower);
}

auto Registers::set_af(u16 data) -> void
{

  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_a(upper);
  this->set_f(lower);
}

auto Registers::set_hl_shadow(u16 data) -> void
{
  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_h_shadow(upper);
  this->set_l_shadow(lower);
}
auto Registers::set_de_shadow(u16 data) -> void
{

  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_d_shadow(upper);
  this->set_e_shadow(lower);
}

auto Registers::set_bc_shadow(u16 data) -> void
{

  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_b_shadow(upper);
  this->set_c_shadow(lower);
}

auto Registers::set_af_shadow(u16 data) -> void
{

  u8 upper = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower = data & MAX_BYTE_SIZE;

  this->set_a_shadow(upper);
  this->set_f_shadow(lower);
}

auto Registers::get_a() const -> u8
{
  return this->A;
}

auto Registers::get_b() const -> u8
{
  return this->B;
}

auto Registers::get_c() const -> u8
{
  return this->C;
}

auto Registers::get_d() const -> u8
{
  return this->D;
}

auto Registers::get_f() const -> u8
{
  return this->F.batch_get();
}

auto Registers::get_e() const -> u8
{
  return this->E;
}

auto Registers::get_h() const -> u8
{
  return this->H;
}

auto Registers::get_l() const -> u8
{
  return this->L;
}

auto Registers::get_a_shadow() const -> u8
{
  return this->A_SHADOW;
}

auto Registers::get_b_shadow() const -> u8
{
  return this->B_SHADOW;
}

auto Registers::get_c_shadow() const -> u8
{
  return this->C_SHADOW;
}

auto Registers::get_d_shadow() const -> u8
{
  return this->D_SHADOW;
}

auto Registers::get_f_shadow() const -> u8
{
  return this->F_SHADOW.batch_get();
}

auto Registers::get_e_shadow() const -> u8
{
  return this->E_SHADOW;
}

auto Registers::get_h_shadow() const -> u8
{
  return this->H_SHADOW;
}

auto Registers::get_l_shadow() const -> u8
{
  return this->L_SHADOW;
}

auto Registers::get_pc() const -> u16
{
  return this->pc;
}

auto Registers::get_sp() const -> u16
{
  return this->sp;
}

auto Registers::get_ix() const -> u16
{
  return this->ix;
}

auto Registers::get_iy() const -> u16
{
  return this->iy;
}

auto Registers::set_i(u8 data) -> void
{
  this->I = data;
}

auto Registers::set_r(u8 data) -> void
{
  this->R = data;
}

auto Registers::get_r() const -> u8
{
  return this->R;
}

auto Registers::get_i() const -> u8
{
  return this->I;
}

auto Registers::increment_pc_by(u16 offset) -> void
{
  this->pc += offset;
}

auto Registers::get_hl() const -> u16
{
  u8 h_reg = this->get_h();
  u8 l_reg = this->get_l();

  u16 hl_pair = (h_reg << BYTE_SHIFT) | l_reg;

  return hl_pair;
}

auto Registers::get_de() const -> u16
{
  u8 d_reg = this->get_d();
  u8 e_reg = this->get_e();

  u16 de_pair = (d_reg << BYTE_SHIFT) | e_reg;

  return de_pair;
}

auto Registers::get_bc() const -> u16
{
  u8 b_reg = this->get_b();
  u8 c_reg = this->get_c();

  u16 bc_pair = (b_reg << BYTE_SHIFT) | c_reg;

  return bc_pair;
}

auto Registers::get_af() const -> u16
{
  u8 a_reg = this->get_a();
  u8 f_reg = this->F.batch_get();

  u16 af_pair = (a_reg << BYTE_SHIFT) | f_reg;

  return af_pair;
}

auto Registers::get_hl_shadow() const -> u16
{
  u8 h_reg_shadow = this->get_h_shadow();
  u8 l_reg_shadow = this->get_l_shadow();

  u16 hl_pair_shadow = (h_reg_shadow << BYTE_SHIFT) | l_reg_shadow;

  return hl_pair_shadow;
}

auto Registers::get_de_shadow() const -> u16
{
  u8 d_reg_shadow = this->get_d_shadow();
  u8 e_reg_shadow = this->get_e_shadow();

  u16 de_pair_shadow = (d_reg_shadow << BYTE_SHIFT) | e_reg_shadow;

  return de_pair_shadow;
}

auto Registers::get_bc_shadow() const -> u16
{
  u8 b_reg_shadow = this->get_b_shadow();
  u8 c_reg_shadow = this->get_c_shadow();

  u16 bc_pair_shadow = (b_reg_shadow << BYTE_SHIFT) | c_reg_shadow;

  return bc_pair_shadow;
}

auto Registers::get_af_shadow() const -> u16
{
  u8 a_reg_shadow = this->get_a_shadow();
  u8 f_reg_shadow = this->F_SHADOW.batch_get();

  u16 af_pair_shadow = (a_reg_shadow << BYTE_SHIFT) | f_reg_shadow;

  return af_pair_shadow;
}

auto Registers::set_hl(u8 upper, u8 lower) -> void
{
  this->set_h(upper);
  this->set_l(lower);
}

auto Registers::set_de(u8 upper, u8 lower) -> void
{
  this->set_d(upper);
  this->set_e(lower);
}

auto Registers::set_bc(u8 upper, u8 lower) -> void
{
  this->set_b(upper);
  this->set_c(lower);
}

auto Registers::set_af(u8 upper, u8 lower) -> void
{
  this->set_a(upper);
  this->F.batch_set(lower);
}

auto Registers::set_hl_shadow(u8 upper, u8 lower) -> void
{
  this->set_h_shadow(upper);
  this->set_l_shadow(lower);
}

auto Registers::set_de_shadow(u8 upper, u8 lower) -> void
{
  this->set_d_shadow(upper);
  this->set_e_shadow(lower);
}

auto Registers::set_bc_shadow(u8 upper, u8 lower) -> void
{
  this->set_b_shadow(upper);
  this->set_c_shadow(lower);
}

auto Registers::set_af_shadow(u8 upper, u8 lower) -> void
{
  this->set_a_shadow(upper);
  this->F_SHADOW.batch_set(lower);
}
