#include "../include/memory.h"
#include <fstream>
#include <iostream>

// Private method which loads ROMs.
// This feature will allow us to load a binary into read-only-memory.
//
// Returns `true` on succuss and `false` if we fail to load rom.
auto Memory::load_rom(char* file_path) -> bool
{
  std::ifstream infile;

  // Try to open the file in binary mode, setting the seek pointer to the end of
  // the file.
  auto file_mode = std::ios_base::binary | std::ios_base::ate;
  infile.open(file_path, file_mode);

  // Check to see if the file was cleanly opened.
  if (infile.good())
  {
    // Since the seek pointer was at first set to the end of the file,
    // we can thus get the size of the binary.
    auto file_size = infile.tellg();

    // Allocate memory for a temporay buffer
    char* buffer = new char[this->rom.size()];

    // Set the seek pointer back to the beginning of the binary.
    infile.seekg(0, std::ios_base::beg);

    // Load the binary into the buffer.
    infile.read(buffer, file_size);

    // Remember to close the file.
    infile.close();

    // Using the buffer, we load the bytes of the binary into our emulator's
    // ROM.
    for (int idx = 0; idx < this->rom.size(); idx++)
    {
      this->rom[idx] = (u8)buffer[idx];
    }

    // Remember to free the buffer to prevent a leak.
    delete[] buffer;
  }
  //  Otherwise, we had an error loading rom and we error out.
  else
  {
    std::cout << "ERROR: There was an error loading rom!\n";
    return false;
  }

  // If we reach this, we have loaded the binary into the ROM correctly.
  return true;
}

// CTOR of the `Memory` class.
// Loads the binary file into ROM using the `load_rom` method
Memory::Memory(char* file_path)
{
  // Zero initialize ROM
  this->rom.fill(0);

  // Try to load rom
  bool is_loaded = load_rom(file_path);

  // If rom loading fails, quit emulator!
  if (!is_loaded)
  {
    std::cout << "ERROR: BAD ROM LOAD DETECTED!!!\nSHUTTING DOWN!\n";

    std::exit(EXIT_FAILURE);
  }
}

// Method to print at the contents of the rom
auto Memory::read_contents() -> void
{
  for (const auto& item : this->rom)
  {
    std::cout << item;
  }
}

// Method to load a byte into a memory location
auto Memory::write_one_byte(u8 data, u16 address) -> void
{
  this->rom[address] = data;
}

// Method to write two bytes into memory using little endian
auto Memory::write_two_bytes(u16 data, u16 address) -> void
{
  u8 upper_half = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower_half = (data & MAX_BYTE_SIZE);

  this->rom[address]     = lower_half;
  this->rom[address + 1] = upper_half;
}

// Method to read a byte from memory using a 16-bit memory address
auto Memory::read_byte(u16 address) -> u8
{
  return this->rom[address];
}
