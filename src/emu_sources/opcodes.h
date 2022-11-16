
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

  // Source: Register H | Destination: Register A
  H_A_Direct = 0x7C,

  // Source: Register H | Destination: Register B
  H_B_Direct = 0x44,

  // Source: Register H | Destination: Register C
  H_C_Direct = 0x4C,

  // Source: Register H | Destination: Register D
  H_D_Direct = 0x54,

  // Source: Register H | Destination: Register E
  H_E_Direct = 0x5C,

  // Source: Register H | Destination: Register H
  H_H_Direct = 0x64,

  // Source: Register H | Destination: Register L
  H_L_Direct = 0x6C,

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

  // Source: location `nn` (extended mode), Destination: A
  nn_A_Ext = 0x3A,

  // Source: location `A` (extended mode), Destination: (nn)
  A_nn_Ext = 0x32,

};

enum class SixteenBitLoad
{
  // Load two bytes found at `nn` to `BC`
  nn_BC_imm = 0x01,

  // Load two bytes found at `nn` to `DE`
  nn_DE_imm = 0x11,

  // Load two bytes found at `nn` to `HL`
  nn_HL_imm = 0x21,

  // Load two bytes found at `nn` to `SP`
  nn_SP_imm = 0x31,

  // Load two bytes from `HL` to `SP`
  HL_SP = 0xF9,

  // Load two bytes from `HL` to location (`nn`)
  HL_nn_Indirect = 0x22,

  // Load two bytes from (`nn`) and (nn + 1) to location HL
  nn_HL_Indirect = 0x2A,

};

// Push and pop opcodes 
enum class Stack
{
  push_af = 0xF6,
  push_bc = 0xC6,
  push_de = 0xD6,
  push_hl = 0xE6,

  pop_af = 0xF1,
  pop_bc = 0xC1,
  pop_de = 0xD1,
  pop_hl = 0xE1,

};

// Helpful when we want to work with the alternative registers
enum class Exchange
{
  hl_ex_de = 0xEB,
  af_ex_af = 0x08,
  exx      = 0xD9,
};

// All instructions are with respect to the `A` register
// TODO: Finish impl
enum class EightBitMath
{
  // ADD A, A
  A_add_A = 0x87,

  // ADD A, B
  A_add_B = 0x80,

  // ADD A, C
  A_add_C = 0x81,

  // ADD A, D
  A_add_D = 0x82,

  // ADD A, E
  A_add_E = 0x83,

  // ADD A, F
  A_add_F = 0x84,

  // ADD A, L
  A_add_L = 0x85,

  // ADD+Carry A, A
  A_addcarry_A = 0x8F,

  // ADD+Carry A, B
  A_addcarry_B = 0x88,

  // ADD+Carry A, C
  A_addcarry_C = 0x89,

  // ADD+Carry A, D
  A_addcarry_D = 0x8A,

  // ADD+Carry A, E
  A_addcarry_E = 0x8B,

  // ADD+Carry A, F
  A_addcarry_F = 0x8C,

  // ADD+Carry A, L
  A_addcarry_L = 0x8D,

  // SUB A, A
  A_sub_A = 0x97,

  // SUB A, B
  A_sub_B = 0x90,

  // SUB A, C
  A_sub_C = 0x91,

  // SUB A, D
  A_sub_D = 0x92,

  // SUB A, E
  A_sub_E = 0x93,

  // SUB A, F
  A_sub_F = 0x94,

  // SUB A, L
  A_sub_L = 0x95,

  // SUB+Carry A, A
  A_subcarry_A = 0x9F,

  // SUB+Carry A, B
  A_subcarry_B = 0x98,

  // SUB+Carry A, C
  A_subcarry_C = 0x99,

  // SUB+Carry A, D
  A_subcarry_D = 0x9A,

  // SUB+Carry A, E
  A_subcarry_E = 0x9B,

  // SUB+Carry A, F
  A_subcarry_F = 0x9C,

  // SUB+Carry A, L
  A_subcarry_L = 0x9D,

  // AND A, A
  A_and_A = 0xA7,

  // AND A, B
  A_and_B = 0xA0,

  // AND A, C
  A_and_C = 0xA1,

  // AND A, D
  A_and_D = 0xA2,

  // AND A, E
  A_and_E = 0xA3,

  // AND A, F
  A_and_F = 0xA4,

  // AND A, L
  A_and_L = 0xA5,

  // XOR A, A
  A_xor_A = 0xAF,

  // XOR A, B
  A_xor_B = 0xA8,

  // XOR A, C
  A_xor_C = 0xA9,

  // XOR A, D
  A_xor_D = 0xAA,

  // XOR A, E
  A_xor_E = 0xAB,

  // XOR A, F
  A_xor_F = 0xAC,

  // XOR A, L
  A_xor_L = 0xAD,

  // OR A, A
  A_or_A = 0xB7,

  // OR A, B
  A_or_B = 0xB0,

  // OR A, C
  A_or_C = 0xB1,

  // OR A, D
  A_or_D = 0xB2,

  // OR A, E
  A_or_E = 0xB3,

  // OR A, F
  A_or_F = 0xB4,

  // OR A, L
  A_or_L = 0xB5,

  // CP A, A
  A_cp_A = 0xBF,

  // CP A, B
  A_cp_B = 0xB8,

  // CP A, C
  A_cp_C = 0xB9,

  // CP A, D
  A_cp_D = 0xBA,

  // CP A, E
  A_cp_E = 0xBB,

  // CP A, F
  A_cp_F = 0xBC,

  // CP A, L
  A_cp_L = 0xBD,

  // INC A
  inc_A = 0x3C,

  // INC B
  inc_B = 0x04,

  // INC C
  inc_C = 0x0C,

  // INC D
  inc_D = 0x14,

  // INC E
  inc_E = 0x1C,

  // INC F
  inc_F = 0x24,

  // INC L
  inc_L = 0x2C,

  // DEC A
  dec_A = 0x3D,

  // DEC B
  dec_B = 0x05,

  // DEC C
  dec_C = 0x0D,

  // DEC D
  dec_D = 0x15,

  // DEC E
  dec_E = 0x1D,

  // DEC F
  dec_F = 0x25,

  // DEC L
  dec_L = 0x2D,

};

// TODO: Finish impl
enum class SixteenBitMath
{
  // ADD HL, BC
  HL_add_BC = 0x09,

  // ADD HL, DE
  HL_add_DE = 0x19,

  // ADD HL, HL
  HL_add_HL = 0x29,

  // ADD HL, SP
  HL_add_SP = 0x39,

  // DEC BC
  dec_BC = 0xDB,

  // DEC DE
  dec_DE = 0x1B,

  // DEC HL
  dec_HL = 0x2B,

  // DEC SP
  dec_SP = 0x3B,

  // INC BC
  inc_BC = 0x03,

  // INC DE
  inc_DE = 0x13,

  // INC HL
  inc_HL = 0x23,

  // INC SP
  inc_SP = 0x33,

};

enum class MiscOpcode
{
  // "No Operation"
  NOP = 0x00,

  // Program end
  HALT = 0x76,
};

