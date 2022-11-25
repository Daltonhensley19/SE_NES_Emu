#include "memory.h"
#include <QDebug>
#include <fstream>

#include "spdlog/spdlog.h"

// Private method which loads binary into RAM.
// This feature will allow us to load a binary into random-access-memory.
//
// Returns `true` on succuss and `false` if we fail to load ram.
auto Memory::load_binary(const char* file_path) -> bool
{
  rom_too_big = false;
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
      // Display file size error message.
      const auto LARGE_FILE_ERROR =
        "Provided binary is larger than emulator's available memory.";
      spdlog::error(LARGE_FILE_ERROR);

      // Print the file size in bytes.
      const auto FILE_SIZE =
        fmt::format("Given file size: {} bytes", file_size);
      spdlog::info(FILE_SIZE);

      // Print amount of available emulator ram.
      const auto EMU_RAM_SIZE =
        fmt::format("Emulator's RAM space: {} bytes", this->ram.size());
      spdlog::info(EMU_RAM_SIZE);

      // Print the size difference between the two.
      const auto SIZE_DIFF =
        fmt::format("Loaded binary is {} bytes too big!",
                    ((size_t)file_size - this->ram.size()));
      spdlog::info(SIZE_DIFF);

      rom_too_big = true;
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
    // Display general load failure message
    const auto LOAD_FAIL =
      fmt::format("There was an error loading binary into emulator's RAM!");
    spdlog::error(LOAD_FAIL);

    // Give helpful hints to fix issue
    const auto LOAD_FAIL_TIP =
      fmt::format("Please provide a file and make sure it exists");
    spdlog::info(LOAD_FAIL_TIP);

    return false;
  }

  // If we reach this, we have loaded the binary into the RAM correctly.
  return true;
}

// CTOR of the `Memory` class.
// Loads the binary file into RAM using the `load_binary` method
Memory::Memory(const char* file_path)
{
  // Zero initialize RAM
  this->ram.fill(0);

  // Try to load ram
  bool is_loaded = load_binary(file_path);

  // If ram loading fails, quit emulator!
  // We don't quit if rom is too big, instead we alert the user of GUI.
  if (!is_loaded && !rom_too_big)
  {
    std::exit(EXIT_FAILURE);
  }
}

// Method to print at the contents of the emulator's RAM
auto Memory::read_contents() const -> void
{
  for (const auto& item : this->ram)
  {
    qDebug() << item;
  }
}

// Method to get hexdump of the ROM
auto Memory::get_hexdump() const -> QString
{
  QString dump{"0x0\t"};
  int counter   = 0;
  long loc_addr = 0x8;
  for (int i = 0; i < this->ram.size(); i++)
  {
    if (counter == 8)
    {
      dump += "0x" + QString::number(QChar(ram[i]).unicode(), 16) + "\n" +
              "0x" + QString::number(loc_addr, 16) + "\t";

      loc_addr += 0x8;
      counter = 0;
    }
    else
      dump += "0x" + QString::number(QChar(ram[i]).unicode(), 16) + " ";

    counter++;
  }

  return dump;
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
auto Memory::read_byte(u16 address) const -> u8
{
  return this->ram[address];
}

Memory::Memory(){};
