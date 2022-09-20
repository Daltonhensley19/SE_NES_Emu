#pragma once

#include "types.h"

class Registers
{
  u16 pc;
  u16 sp;
  u16 ix;
  u16 iy;

  u16 AF1;
  u16 BC1;
  u16 DE1;
  u16 HL1;

  u16 AF2;
  u16 BC2;
  u16 DE2;
  u16 HL2;

  u8 I;
  u8 R;
};