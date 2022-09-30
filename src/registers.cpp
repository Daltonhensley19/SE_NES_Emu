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

void Registers::set_a(u8 data)
{
  this->A = data;
}

void Registers::set_b(u8 data)
{
  this->B = data;
}

void Registers::set_c(u8 data)
{
  this->C = data;
}

void Registers::set_d(u8 data)
{
  this->D = data;
}

void Registers::set_e(u8 data)
{
  this->E = data;
}

void Registers::set_h(u8 data)
{
  this->H = data;
}

void Registers::set_l(u8 data)
{
  this->L = data;
}

void Registers::set_pc(u16 data)
{
  this->pc = data;
}
void Registers::set_sp(u16 data)
{
  this->sp = data;
}
void Registers::set_ix(u16 data)
{
  this->ix = data;
}
void Registers::set_iy(u16 data)
{
  this->iy = data;
}

u8 Registers::get_a() const
{
  return this->A;
}

u8 Registers::get_b() const
{
  return this->B;
}

u8 Registers::get_c() const
{
  return this->C;
}

u8 Registers::get_d() const
{
  return this->D;
}

u8 Registers::get_e() const
{
  return this->E;
}

u8 Registers::get_h() const
{
  return this->H;
}

u8 Registers::get_l() const
{
  return this->L;
}

u16 Registers::get_pc() const
{
  return this->pc;
}

u16 Registers::get_sp() const
{
  return this->sp;
}

u16 Registers::get_ix() const
{
  return this->ix;
}

u16 Registers::get_iy() const
{
  return this->iy;
}

void Registers::set_i(u8 data)
{
  this->I = data;
}

void Registers::set_r(u8 data)
{
  this->R = data;
}

u8 Registers::get_r() const
{
  return this->R;
}

u8 Registers::get_i() const
{
  return this->I;
}