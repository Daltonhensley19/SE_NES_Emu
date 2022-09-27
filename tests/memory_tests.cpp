#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 1

#include "../include/doctest.h"
#include "../include/memory.h"

TEST_CASE("Testing the `write_one_byte` method")
{
  GIVEN("A byte to write and an address to lookup")
  {
    u8 byte     = 0xAF;
    u16 address = 0xFFAA;

    char* file_path = "../../tests/memory_sample.txt";
    Memory mem      = Memory(file_path);

    WHEN("Method tries to write byte into address")
    {
      THEN("Check that byte is loaded into address")
      {
        mem.write_one_byte(byte, address);
        CHECK(mem.read_byte(address) == byte);
      }
    }
  }
}

TEST_CASE("Testing the `write_two_bytes` method")
{
  GIVEN("A two bytes to write and an address to lookup")
  {
    u16 two_bytes = 0xBEEF;
    u16 address   = 0xFFAA;

    char* file_path = "../../tests/memory_sample.txt";
    Memory mem      = Memory(file_path);

    WHEN("Method tries to write two bytes little endian into address")
    {
      THEN("Check that bytes are loaded is loaded into address little endian")
      {
        mem.write_two_bytes(two_bytes, address);

        CHECK(mem.read_byte(address) == 0xEF);
        CHECK(mem.read_byte(address + 1) == 0xBE);
      }
    }
  }
}
