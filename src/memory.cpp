#include "../include/memory.h"
#include <fstream>
#include <iostream>

// Private method which loads binary into RAM.
// This feature will allow us to load a binary into random-access-memory.
//
// Returns `true` on succuss and `false` if we fail to load ram.
auto Memory::load_binary(char* file_path) -> bool
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

    // Check to see if the provided binary is larger than 64Kb
    // If the binary is larger, then there is an error!
    if (file_size > this->ram.size())
    {
      std::cout << "PANIC !!!\n Provided binary is larger than emulator's "
                   "available memory.\n";

      std::cout << "Given file size: " << file_size << " bytes\n";
      std::cout << "Emulator's RAM space: " << this->ram.size() << " bytes\n";

      std::cout << "Loaded binary is " << ((size_t)file_size - this->ram.size())
                << " bytes too big!\n";

      return false;
    }

    // Allocate memory for a temporay buffer
    char* buffer = new char[this->ram.size()];

    // Set the seek pointer back to the beginning of the binary.
    infile.seekg(0, std::ios_base::beg);

    // Load the binary into the buffer.
    infile.read(buffer, file_size);

    // Remember to close the file.
    infile.close();

    // Using the buffer, we load the bytes of the binary into our emulator's
    // RAM.
    for (int idx = 0; idx < this->ram.size(); idx++)
    {
      this->ram[idx] = (u8)buffer[idx];
    }

    // Remember to free the buffer to prevent a leak.
    delete[] buffer;
  }
  //  Otherwise, we had an error loading ram and we error out.
  else
  {
    std::cout << "ERROR: There was an error loading ram!\n";
    return false;
  }

  // If we reach this, we have loaded the binary into the RAM correctly.
  return true;
}

// CTOR of the `Memory` class.
// Loads the binary file into RAM using the `load_binary` method
Memory::Memory(char* file_path)
{
  // Zero initialize RAM
  this->ram.fill(0);

  // Try to load ram
  bool is_loaded = load_binary(file_path);

  // If ram loading fails, quit emulator!
  if (!is_loaded)
  {
    std::cout << "PANIC !!!\nUnable to load binary into emulator's RAM.\n\n";
    std::cout
      << "Possible fixes: make sure path is correct and binary exists.\n";

    std::exit(EXIT_FAILURE);
  }
}

// Method to print at the contents of the emulator's RAM
auto Memory::read_contents() -> void
{
  for (const auto& item : this->ram)
  {
    std::cout << item;
  }
}

// Method to load a byte into a memory location
auto Memory::write_one_byte(u8 data, u16 address) -> void
{
  this->ram[address] = data;
}

// Method to write two bytes into memory using little endian
//
// Little endian here means that the lower 8 bits are loaded
// into memory first. The upper 8 bits are loaded into `address + 1`.
auto Memory::write_two_bytes(u16 data, u16 address) -> void
{
  u8 upper_half = (data >> BYTE_SHIFT) & MAX_BYTE_SIZE;
  u8 lower_half = (data & MAX_BYTE_SIZE);

  this->ram[address]     = lower_half;
  this->ram[address + 1] = upper_half;
}

// Method to read a byte fram memory using a 16-bit memory address
auto Memory::read_byte(u16 address) -> u8
{
  return this->ram[address];
}
