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
    auto mem = Memory(argv[1]);
    mem.read_contents();
  }

  return 0;
}
