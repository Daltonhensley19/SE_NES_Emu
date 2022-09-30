#include "../include/flags.h"

// IMPORTANT: Bit 4 and bit 6 are unused!

// Method to see if the C flag is set to 1
auto Flags::is_c_flag_set() const -> bool
{
  return (bool)((this->byte & 0b00000001));
}

// Method to see if the N flag is set to 1
auto Flags::is_n_flag_set() const -> bool
{
  return (bool)((this->byte & 0b00000010) >> 1);
}

// Method to see if the P/V flag is set to 1
auto Flags::is_pv_flag_set() const -> bool
{
  return (bool)((this->byte & 0b00000100) >> 2);
}

// Method to see if the H flag is set to 1
auto Flags::is_h_flag_set() const -> bool
{
  return (bool)((this->byte & 0b00010000) >> 4);
}

// Method to see if the Z flag is set to 1
auto Flags::is_z_flag_set() const -> bool
{
  return (bool)((this->byte & 0b01000000) >> 6);
}

// Method to see if the S flag is set to 1
auto Flags::is_s_flag_set() const -> bool
{
  return (bool)((this->byte & 0b10000000) >> 7);
}

// Method to set the C flag to 1
auto Flags::set_c_flag() -> void
{
  this->byte = this->byte | 0b00000001;
}

// Method to set the N flag to 1
auto Flags::set_n_flag() -> void
{
  this->byte = this->byte | 0b00000010;
}

// Method to set the P/V flag to 1
auto Flags::set_pv_flag() -> void
{
  this->byte = this->byte | 0b00000100;
}

// Method to set the H flag to 1
auto Flags::set_h_flag() -> void
{
  this->byte = this->byte | 0b00010000;
}

// Method to set the Z flag to 1
auto Flags::set_z_flag() -> void
{
  this->byte = this->byte | 0b01000000;
}

// Method to set the S flag to 1
auto Flags::set_s_flag() -> void
{
  this->byte = this->byte | 0b10000000;
}

// Method to clear the C flag to 0
auto Flags::clear_c_flag() -> void
{
  this->byte = this->byte & 0b11111110;
}

// Method to clear the N flag to 0
auto Flags::clear_n_flag() -> void
{
  this->byte = this->byte & 0b11111101;
}

// Method to clear the P/V flag to 0
auto Flags::clear_pv_flag() -> void
{
  this->byte = this->byte & 0b11111011;
}

// Method to clear the H flag to 0
auto Flags::clear_h_flag() -> void
{
  this->byte = this->byte & 0b11101111;
}

// Method to clear the Z flag to 0
auto Flags::clear_z_flag() -> void
{
  this->byte = this->byte & 0b10111111;
}

// Method to clear the S flag to 0
auto Flags::clear_s_flag() -> void
{
  this->byte = this->byte & 0b01111111;
}

Flags::Flags()
{
    this->byte = 0b00000000;
}