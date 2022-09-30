#include "../include/registers.h"

// IMPORTANT: this code was generate using Python.
// I could not be bothered to write these by hand!

// I personally hate getters and setters, but here we are.

Registers::Registers()
{
  this->pc = 0;
  this->sp = 0;
  this->ix = 0;
  this->iy = 0;

  this->A = 0;
  this->F = Flags{};
  this->B = 0;
  this->C = 0;
  this->D = 0;
  this->E = 0;
  this->H = 0;
  this->L = 0;

  this->A_SHADOW = 0;
  this->F_SHADOW = Flags{};
  this->B_SHADOW = 0;
  this->C_SHADOW = 0;
  this->D_SHADOW = 0;
  this->E_SHADOW = 0;
  this->H_SHADOW = 0;
  this->L_SHADOW = 0;

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