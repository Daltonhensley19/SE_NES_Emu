
// While this looks like a lot, we only use this to give
// a name to the opcodes. This makes ergonomics much better!
enum class EightBitLoad
{
  // Source: Register A | Destination: Register A
  A_A_Direct = 0x7F,

  // Source: Register A | Destination: Register B
  A_B_Direct = 0x47,

  // Source: Register A | Destination: Register C
  A_C_Direct = 0x4F,

  // Source: Register A | Destination: Register D
  A_D_Direct = 0x57,

  // Source: Register A | Destination: Register E
  A_E_Direct = 0x5F,

  // Source: Register A | Destination: Register H
  A_H_Direct = 0x67,

  // Source: Register A | Destination: Register L
  A_L_Direct = 0x6F,

  // Source: Register B | Destination: Register A
  B_A_Direct = 0x78,

  // Source: Register B | Destination: Register B
  B_B_Direct = 0x40,

  // Source: Register B | Destination: Register C
  B_C_Direct = 0x48,

  // Source: Register B | Destination: Register D
  B_D_Direct = 0x50,

  // Source: Register B | Destination: Register E
  B_E_Direct = 0x58,

  // Source: Register B | Destination: Register H
  B_H_Direct = 0x60,

  // Source: Register B | Destination: Register L
  B_L_Direct = 0x68,

  // Source: Register C | Destination: Register A
  C_A_Direct = 0x79,

  // Source: Register C | Destination: Register B
  C_B_Direct = 0x41,

  // Source: Register C | Destination: Register C
  C_C_Direct = 0x49,

  // Source: Register C | Destination: Register D
  C_D_Direct = 0x51,

  // Source: Register C | Destination: Register E
  C_E_Direct = 0x59,

  // Source: Register C | Destination: Register H
  C_H_Direct = 0x61,

  // Source: Register C | Destination: Register L
  C_L_Direct = 0x69,

  // Source: Register D | Destination: Register A
  D_A_Direct = 0x7A,

  // Source: Register D | Destination: Register B
  D_B_Direct = 0x42,

  // Source: Register D | Destination: Register C
  D_C_Direct = 0x4A,

  // Source: Register D | Destination: Register D
  D_D_Direct = 0x52,

  // Source: Register D | Destination: Register E
  D_E_Direct = 0x5A,

  // Source: Register D | Destination: Register H
  D_H_Direct = 0x62,

  // Source: Register D | Destination: Register L
  D_L_Direct = 0x6A,

  // Source: Register E | Destination: Register A
  E_A_Direct = 0x7B,

  // Source: Register E | Destination: Register B
  E_B_Direct = 0x42,

  // Source: Register E | Destination: Register C
  E_C_Direct = 0x4A,

  // Source: Register E | Destination: Register D
  E_D_Direct = 0x52,

  // Source: Register E | Destination: Register E
  E_E_Direct = 0x5A,

  // Source: Register E | Destination: Register H
  E_H_Direct = 0x62,

  // Source: Register E | Destination: Register L
  E_L_Direct = 0x6A,

  // Source: Register F | Destination: Register A
  F_A_Direct = 0x7C,

  // Source: Register F | Destination: Register B
  F_B_Direct = 0x44,

  // Source: Register F | Destination: Register C
  F_C_Direct = 0x4C,

  // Source: Register F | Destination: Register D
  F_D_Direct = 0x54,

  // Source: Register F | Destination: Register E
  F_E_Direct = 0x5C,

  // Source: Register F | Destination: Register H
  F_H_Direct = 0x64,

  // Source: Register F | Destination: Register L
  F_L_Direct = 0x6C,

  // Source: Register L | Destination: Register A
  L_A_Direct = 0x7D,

  // Source: Register L | Destination: Register B
  L_B_Direct = 0x45,

  // Source: Register L | Destination: Register C
  L_C_Direct = 0x4D,

  // Source: Register L | Destination: Register D
  L_D_Direct = 0x55,

  // Source: Register L | Destination: Register E
  L_E_Direct = 0x5D,

  // Source: Register L | Destination: Register H
  L_H_Direct = 0x65,

  // Source: Register L | Destination: Register L
  L_L_Direct = 0x6D,

  // Source (offset): Register pair HL | Destination: Register A
  HL_A_Indirect = 0x7E,

  // Source (offset): Register pair HL | Destination: Register B
  HL_B_Indirect = 0x46,

  // Source (offset): Register pair HL | Destination: Register C
  HL_C_Indirect = 0x4E,

  // Source (offset): Register pair HL | Destination: Register D
  HL_D_Indirect = 0x56,

  // Source (offset): Register pair HL | Destination: Register E
  HL_E_Indirect = 0x5E,

  // Source (offset): Register pair HL | Destination: Register E
  HL_H_Indirect = 0x66,

  // Source (offset): Register pair HL | Destination: Register E
  HL_L_Indirect = 0x6E,

  // Source (offset): Register pair BC | Destination: Register A
  BC_A_Indirect = 0x0A,

  // Source (offset): Register pair DE | Destination: Register A
  DE_A_Indirect = 0x1A,

  // Source: A, Destination: (HL) indirect
  A_HL_Indirect = 0x77,

  // Source: B, Destination: (HL) indirect
  B_HL_Indirect = 0x70,

  // Source: C, Destination: (HL) indirect
  C_HL_Indirect = 0x71,

  // Source: D, Destination: (HL) indirect
  D_HL_Indirect = 0x72,

  // Source: E, Destination: (HL) indirect
  E_HL_Indirect = 0x73,

  // Source: F, Destination: (HL) indirect
  F_HL_Indirect = 0x74,

  // Source: L, Destination: (HL) indirect
  L_HL_Indirect = 0x75,

  // Source: A, Destination: (BC) indirect
  A_BC_Indirect = 0x02,

  // Source: A, Destination: (DE) indirect
  A_DE_Indirect = 0x12,

  // Source: location `n` (immediate mode), Destination: A
  n_A_Imm = 0x3E,

  // Source: location `n` (immediate mode), Destination: B
  n_B_Imm = 0x06,

  // Source: location `n` (immediate mode), Destination: C
  n_C_Imm = 0x0E,

  // Source: location `n` (immediate mode), Destination: D
  n_D_Imm = 0x16,

  // Source: location `n` (immediate mode), Destination: E
  n_E_Imm = 0x1E,

  // Source: location `n` (immediate mode), Destination: H
  n_H_Imm = 0x26,

  // Source: location `n` (immediate mode), Destination: L
  n_L_Imm = 0x2E,

  // Source: location `n` (immediate mode), Destination: (HL)
  n_HL_Imm = 0x36,

};