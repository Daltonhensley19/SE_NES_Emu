

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

  

  // Source: Register A | Destination: Register A
  B_A_Direct = 0x78,


  // Source (offset): Register pair HL | Destination: Register A
  HL_A_Indirect = 0x7E,


};