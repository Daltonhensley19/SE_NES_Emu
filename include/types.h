#pragma once

#include <cstdint>

// A `u8` is just a 8-bit unsigned data type.
// A `u16` is just a 16-bit unsigned data type.
//
// We will used these to represent registers (some are 8-bit, others 16-bit.) 
// All memory ADDRESSES (locations in memory) should be a `u16` data type.
// NOTE: This is just a type alias for these types!
using u8 = std::uint8_t;
using u16 = std::uint16_t;



// `0xFF` is `0b1111_1111`, which is one byte with all ones! 
// `0xFFFF` is `0b1111_1111_1111_1111`, which is two bytes with all ones!
//
// The first two constants will be useful for bitmasks.
// The last constant is mainly used for bit-shifting things along a one byte boundary.
constexpr u8 MAX_BYTE_SIZE = 0xFF;
constexpr u16 MAX_WORD_SIZE = 0xFFFF;
constexpr u8 BYTE_SHIFT = 8;




