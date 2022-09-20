#include "../include/memory.h"
#include "../include/registers.h"

#include "spdlog/spdlog.h"
#include <iostream>

int main(int argc, char** argv)
{
  if (argc != 2)
  {
    spdlog::error("EXPECTED PATH TO FILE NOT PROVIDED!");
  }
  else
  {
    Memory mem = Memory(argv[1]);
  }

  return 0;
}
