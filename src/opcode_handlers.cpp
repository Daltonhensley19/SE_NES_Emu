#include "../include/opcode_handlers.h"


void load_a_into_b(CPUEmulator cpu)
{
    auto a_reg = cpu.regs.get_a();
    cpu.regs.set_b(a_reg);
}