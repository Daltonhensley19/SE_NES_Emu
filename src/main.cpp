#include "../include/memory.h"
#include <iostream>

int main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cout << "ERROR: EXPECTED ONLY PATH TO BINARY!\n";
  }
  else
  {
    Memory mem = Memory(argv[1]);
    mem.read_contents();

    mem.write_two_bytes((u16)'hc', 0);


    mem.read_contents();

      // Location: 1 -> 0x3 
      // Location: 2 -> 0x1
      // Location: 3 -> 0x2
  }

  return 0;
}
