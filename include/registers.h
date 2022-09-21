#pragma once

#include "flags.h"
#include "types.h"
class Registers
{
private:
  u16 pc;
  u16 sp;
  u16 ix;
  u16 iy;

  u8 A;
  Flags F;
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
};