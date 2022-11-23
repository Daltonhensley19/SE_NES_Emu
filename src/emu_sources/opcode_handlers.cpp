#include "opcode_handlers.h"
#include "spdlog/spdlog.h"

#include <QDebug>
#include <limits.h>

// Load a into a
auto load_a_into_a(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  cpu.regs.set_a(a_reg);

  cpu.regs.increment_pc_by(1);
}

// Load a into b
auto load_a_into_b(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  cpu.regs.set_b(a_reg);

  cpu.regs.increment_pc_by(1);
}

// Load a into c
auto load_a_into_c(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  cpu.regs.set_c(a_reg);

  cpu.regs.increment_pc_by(1);
}

// Load a into d
auto load_a_into_d(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  cpu.regs.set_d(a_reg);

  cpu.regs.increment_pc_by(1);
}

// Load a into e
auto load_a_into_e(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  cpu.regs.set_e(a_reg);

  cpu.regs.increment_pc_by(1);
}

// Load a into h
auto load_a_into_h(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  cpu.regs.set_h(a_reg);

  cpu.regs.increment_pc_by(1);
}

// Load a into l
auto load_a_into_l(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  cpu.regs.set_l(a_reg);

  cpu.regs.increment_pc_by(1);
}

// Load b into a
auto load_b_into_a(CPUEmulator& cpu) -> void
{
  auto b_reg = cpu.regs.get_b();
  cpu.regs.set_a(b_reg);

  cpu.regs.increment_pc_by(1);
}

// Load b into b
auto load_b_into_b(CPUEmulator& cpu) -> void
{
  auto b_reg = cpu.regs.get_b();
  cpu.regs.set_b(b_reg);

  cpu.regs.increment_pc_by(1);
}

// Load b into c
auto load_b_into_c(CPUEmulator& cpu) -> void
{
  auto b_reg = cpu.regs.get_b();
  cpu.regs.set_c(b_reg);

  cpu.regs.increment_pc_by(1);
}

// Load b into d
auto load_b_into_d(CPUEmulator& cpu) -> void
{
  auto b_reg = cpu.regs.get_b();
  cpu.regs.set_d(b_reg);

  cpu.regs.increment_pc_by(1);
}

// Load b into e
auto load_b_into_e(CPUEmulator& cpu) -> void
{
  auto b_reg = cpu.regs.get_b();
  cpu.regs.set_e(b_reg);

  cpu.regs.increment_pc_by(1);
}

// Load b into h
auto load_b_into_h(CPUEmulator& cpu) -> void
{
  auto b_reg = cpu.regs.get_b();
  cpu.regs.set_h(b_reg);

  cpu.regs.increment_pc_by(1);
}

// Load b into l
auto load_b_into_l(CPUEmulator& cpu) -> void
{
  auto b_reg = cpu.regs.get_b();
  cpu.regs.set_l(b_reg);

  cpu.regs.increment_pc_by(1);
}

// Load c into a
auto load_c_into_a(CPUEmulator& cpu) -> void
{
  auto c_reg = cpu.regs.get_c();
  cpu.regs.set_a(c_reg);

  cpu.regs.increment_pc_by(1);
}

// Load c into b
auto load_c_into_b(CPUEmulator& cpu) -> void
{
  auto c_reg = cpu.regs.get_c();
  cpu.regs.set_b(c_reg);

  cpu.regs.increment_pc_by(1);
}

// Load c into c
auto load_c_into_c(CPUEmulator& cpu) -> void
{
  auto c_reg = cpu.regs.get_c();
  cpu.regs.set_c(c_reg);

  cpu.regs.increment_pc_by(1);
}

// Load c into d
auto load_c_into_d(CPUEmulator& cpu) -> void
{
  auto c_reg = cpu.regs.get_c();
  cpu.regs.set_d(c_reg);

  cpu.regs.increment_pc_by(1);
}

// Load c into e
auto load_c_into_e(CPUEmulator& cpu) -> void
{
  auto c_reg = cpu.regs.get_c();
  cpu.regs.set_e(c_reg);

  cpu.regs.increment_pc_by(1);
}

// Load c into h
auto load_c_into_h(CPUEmulator& cpu) -> void
{
  auto c_reg = cpu.regs.get_c();
  cpu.regs.set_h(c_reg);

  cpu.regs.increment_pc_by(1);
}

// Load c into l
auto load_c_into_l(CPUEmulator& cpu) -> void
{
  auto c_reg = cpu.regs.get_c();
  cpu.regs.set_l(c_reg);

  cpu.regs.increment_pc_by(1);
}

// Load d into a
auto load_d_into_a(CPUEmulator& cpu) -> void
{
  auto d_reg = cpu.regs.get_d();
  cpu.regs.set_a(d_reg);

  cpu.regs.increment_pc_by(1);
}

// Load d into b
auto load_d_into_b(CPUEmulator& cpu) -> void
{
  auto d_reg = cpu.regs.get_d();
  cpu.regs.set_b(d_reg);

  cpu.regs.increment_pc_by(1);
}

// Load d into c
auto load_d_into_c(CPUEmulator& cpu) -> void
{
  auto d_reg = cpu.regs.get_d();
  cpu.regs.set_c(d_reg);

  cpu.regs.increment_pc_by(1);
}

// Load d into d
auto load_d_into_d(CPUEmulator& cpu) -> void
{
  auto d_reg = cpu.regs.get_d();
  cpu.regs.set_d(d_reg);

  cpu.regs.increment_pc_by(1);
}

// Load d into e
auto load_d_into_e(CPUEmulator& cpu) -> void
{
  auto d_reg = cpu.regs.get_d();
  cpu.regs.set_e(d_reg);

  cpu.regs.increment_pc_by(1);
}

// Load d into h
auto load_d_into_h(CPUEmulator& cpu) -> void
{
  auto d_reg = cpu.regs.get_d();
  cpu.regs.set_h(d_reg);

  cpu.regs.increment_pc_by(1);
}

// Load d into l
auto load_d_into_l(CPUEmulator& cpu) -> void
{
  auto d_reg = cpu.regs.get_d();
  cpu.regs.set_l(d_reg);

  cpu.regs.increment_pc_by(1);
}

// Load e into a
auto load_e_into_a(CPUEmulator& cpu) -> void
{
  auto e_reg = cpu.regs.get_e();
  cpu.regs.set_a(e_reg);

  cpu.regs.increment_pc_by(1);
}

// Load e into b
auto load_e_into_b(CPUEmulator& cpu) -> void
{
  auto e_reg = cpu.regs.get_e();
  cpu.regs.set_b(e_reg);

  cpu.regs.increment_pc_by(1);
}

// Load e into c
auto load_e_into_c(CPUEmulator& cpu) -> void
{
  auto e_reg = cpu.regs.get_e();
  cpu.regs.set_c(e_reg);

  cpu.regs.increment_pc_by(1);
}

// Load e into d
auto load_e_into_d(CPUEmulator& cpu) -> void
{
  auto e_reg = cpu.regs.get_e();
  cpu.regs.set_d(e_reg);

  cpu.regs.increment_pc_by(1);
}

// Load e into e
auto load_e_into_e(CPUEmulator& cpu) -> void
{
  auto e_reg = cpu.regs.get_e();
  cpu.regs.set_e(e_reg);

  cpu.regs.increment_pc_by(1);
}

// Load e into h
auto load_e_into_h(CPUEmulator& cpu) -> void
{
  auto e_reg = cpu.regs.get_e();
  cpu.regs.set_h(e_reg);

  cpu.regs.increment_pc_by(1);
}

// Load e into l
auto load_e_into_l(CPUEmulator& cpu) -> void
{
  auto e_reg = cpu.regs.get_e();
  cpu.regs.set_l(e_reg);

  cpu.regs.increment_pc_by(1);
}

// Load h into a
auto load_h_into_a(CPUEmulator& cpu) -> void
{
  auto h_reg = cpu.regs.get_h();
  cpu.regs.set_a(h_reg);

  cpu.regs.increment_pc_by(1);
}

// Load h into b
auto load_h_into_b(CPUEmulator& cpu) -> void
{
  auto h_reg = cpu.regs.get_h();
  cpu.regs.set_b(h_reg);

  cpu.regs.increment_pc_by(1);
}

// Load h into c
auto load_h_into_c(CPUEmulator& cpu) -> void
{
  auto h_reg = cpu.regs.get_h();
  cpu.regs.set_c(h_reg);

  cpu.regs.increment_pc_by(1);
}

// Load h into d
auto load_h_into_d(CPUEmulator& cpu) -> void
{
  auto h_reg = cpu.regs.get_h();
  cpu.regs.set_d(h_reg);

  cpu.regs.increment_pc_by(1);
}

// Load h into e
auto load_h_into_e(CPUEmulator& cpu) -> void
{
  auto h_reg = cpu.regs.get_h();
  cpu.regs.set_e(h_reg);

  cpu.regs.increment_pc_by(1);
}

// Load h into h
auto load_h_into_h(CPUEmulator& cpu) -> void
{
  auto h_reg = cpu.regs.get_h();
  cpu.regs.set_h(h_reg);

  cpu.regs.increment_pc_by(1);
}

// Load h into l
auto load_h_into_l(CPUEmulator& cpu) -> void
{
  auto h_reg = cpu.regs.get_h();
  cpu.regs.set_l(h_reg);

  cpu.regs.increment_pc_by(1);
}

// Load l into a
auto load_l_into_a(CPUEmulator& cpu) -> void
{
  auto l_reg = cpu.regs.get_l();
  cpu.regs.set_a(l_reg);

  cpu.regs.increment_pc_by(1);
}

// Load l into b
auto load_l_into_b(CPUEmulator& cpu) -> void
{
  auto l_reg = cpu.regs.get_l();
  cpu.regs.set_b(l_reg);

  cpu.regs.increment_pc_by(1);
}

// Load l into c
auto load_l_into_c(CPUEmulator& cpu) -> void
{
  auto l_reg = cpu.regs.get_l();
  cpu.regs.set_c(l_reg);

  cpu.regs.increment_pc_by(1);
}

// Load l into d
auto load_l_into_d(CPUEmulator& cpu) -> void
{
  auto l_reg = cpu.regs.get_l();
  cpu.regs.set_d(l_reg);

  cpu.regs.increment_pc_by(1);
}

// Load l into e
auto load_l_into_e(CPUEmulator& cpu) -> void
{
  auto l_reg = cpu.regs.get_l();
  cpu.regs.set_e(l_reg);

  cpu.regs.increment_pc_by(1);
}

// Load l into h
auto load_l_into_h(CPUEmulator& cpu) -> void
{
  auto l_reg = cpu.regs.get_l();
  cpu.regs.set_h(l_reg);

  cpu.regs.increment_pc_by(1);
}

// Load l into l
auto load_l_into_l(CPUEmulator& cpu) -> void
{
  auto l_reg = cpu.regs.get_l();
  cpu.regs.set_l(l_reg);

  cpu.regs.increment_pc_by(1);
}

// Load hl into a (indirect addressing mode)
auto load_hl_into_a_indirect(CPUEmulator& cpu) -> void
{
  auto hl_reg = cpu.regs.get_hl();
  auto data   = cpu.mem.read_byte(hl_reg);

  cpu.regs.set_a(data);

  cpu.regs.increment_pc_by(1);
}

// Load hl into b (indirect addressing mode)
auto load_hl_into_b_indirect(CPUEmulator& cpu) -> void
{
  auto hl_reg = cpu.regs.get_hl();
  auto data   = cpu.mem.read_byte(hl_reg);

  cpu.regs.set_b(data);

  cpu.regs.increment_pc_by(1);
}

// Load hl into c (indirect addressing mode)
auto load_hl_into_c_indirect(CPUEmulator& cpu) -> void
{
  auto hl_reg = cpu.regs.get_hl();
  auto data   = cpu.mem.read_byte(hl_reg);

  cpu.regs.set_c(data);

  cpu.regs.increment_pc_by(1);
}

// Load hl into d (indirect addressing mode)
auto load_hl_into_d_indirect(CPUEmulator& cpu) -> void
{
  auto hl_reg = cpu.regs.get_hl();
  auto data   = cpu.mem.read_byte(hl_reg);

  cpu.regs.set_d(data);

  cpu.regs.increment_pc_by(1);
}

// Load hl into e (indirect addressing mode)
auto load_hl_into_e_indirect(CPUEmulator& cpu) -> void
{
  auto hl_reg = cpu.regs.get_hl();
  auto data   = cpu.mem.read_byte(hl_reg);

  cpu.regs.set_e(data);

  cpu.regs.increment_pc_by(1);
}

// Load hl into h (indirect addressing mode)
auto load_hl_into_h_indirect(CPUEmulator& cpu) -> void
{
  auto hl_reg = cpu.regs.get_hl();
  auto data   = cpu.mem.read_byte(hl_reg);

  cpu.regs.set_h(data);

  cpu.regs.increment_pc_by(1);
}

// Load hl into l (indirect addressing mode)
auto load_hl_into_l_indirect(CPUEmulator& cpu) -> void
{
  auto hl_reg = cpu.regs.get_hl();
  auto data   = cpu.mem.read_byte(hl_reg);

  cpu.regs.set_l(data);

  cpu.regs.increment_pc_by(1);
}

// Load bc into a (indirect addressing mode)
auto load_bc_into_a_indirect(CPUEmulator& cpu) -> void
{
  auto bc_reg = cpu.regs.get_bc();
  auto data   = cpu.mem.read_byte(bc_reg);

  cpu.regs.set_a(data);

  cpu.regs.increment_pc_by(1);
}

// Load de into a (indirect addressing mode)
auto load_de_into_a_indirect(CPUEmulator& cpu) -> void
{
  auto de_reg = cpu.regs.get_de();
  auto data   = cpu.mem.read_byte(de_reg);

  cpu.regs.set_a(data);

  cpu.regs.increment_pc_by(1);
}

// Load a into hl (indirect addressing mode)
auto load_a_into_hl_indirect(CPUEmulator& cpu) -> void
{
  auto a_reg    = cpu.regs.get_a();
  auto location = cpu.regs.get_hl();

  cpu.mem.write_one_byte(a_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load b into hl (indirect addressing mode)
auto load_b_into_hl_indirect(CPUEmulator& cpu) -> void
{
  auto b_reg    = cpu.regs.get_b();
  auto location = cpu.regs.get_hl();

  cpu.mem.write_one_byte(b_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load c into hl (indirect addressing mode)
auto load_c_into_hl_indirect(CPUEmulator& cpu) -> void
{
  auto c_reg    = cpu.regs.get_c();
  auto location = cpu.regs.get_hl();

  cpu.mem.write_one_byte(c_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load d into hl (indirect addressing mode)
auto load_d_into_hl_indirect(CPUEmulator& cpu) -> void
{
  auto d_reg    = cpu.regs.get_d();
  auto location = cpu.regs.get_hl();

  cpu.mem.write_one_byte(d_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load e into hl (indirect addressing mode)
auto load_e_into_hl_indirect(CPUEmulator& cpu) -> void
{
  auto e_reg    = cpu.regs.get_e();
  auto location = cpu.regs.get_hl();

  cpu.mem.write_one_byte(e_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load h into hl (indirect addressing mode)
auto load_h_into_hl_indirect(CPUEmulator& cpu) -> void
{
  auto h_reg    = cpu.regs.get_h();
  auto location = cpu.regs.get_hl();

  cpu.mem.write_one_byte(h_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load l into hl (indirect addressing mode)
auto load_l_into_hl_indirect(CPUEmulator& cpu) -> void
{
  auto l_reg    = cpu.regs.get_l();
  auto location = cpu.regs.get_hl();

  cpu.mem.write_one_byte(l_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load a into bc (indirect addressing mode)
auto load_a_into_bc_indirect(CPUEmulator& cpu) -> void
{
  auto a_reg    = cpu.regs.get_a();
  auto location = cpu.regs.get_bc();

  cpu.mem.write_one_byte(a_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load a into de (indirect addressing mode)
auto load_a_into_de_indirect(CPUEmulator& cpu) -> void
{
  auto a_reg    = cpu.regs.get_a();
  auto location = cpu.regs.get_de();

  cpu.mem.write_one_byte(a_reg, location);

  cpu.regs.increment_pc_by(1);
}

// Load n into a (immediate addressing mode)
auto load_n_into_a_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  cpu.regs.set_a(data);

  cpu.regs.increment_pc_by(2);
}

// Load n into b (immediate addressing mode)
auto load_n_into_b_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  cpu.regs.set_b(data);

  cpu.regs.increment_pc_by(2);
}

// Load n into c (immediate addressing mode)
auto load_n_into_c_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  cpu.regs.set_c(data);

  cpu.regs.increment_pc_by(2);
}

// Load n into d (immediate addressing mode)
auto load_n_into_d_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  cpu.regs.set_d(data);

  cpu.regs.increment_pc_by(2);
}

// Load n into e (immediate addressing mode)
auto load_n_into_e_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  cpu.regs.set_e(data);

  cpu.regs.increment_pc_by(2);
}

// Load n into h (immediate addressing mode)
auto load_n_into_h_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  cpu.regs.set_h(data);

  cpu.regs.increment_pc_by(2);
}

// Load n into l (immediate addressing mode)
auto load_n_into_l_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  cpu.regs.set_l(data);

  cpu.regs.increment_pc_by(2);
}

// Load n into hl (immediate addressing mode)
auto load_n_into_hl_imm(CPUEmulator& cpu) -> void
{
  auto operand_location = cpu.regs.get_pc() + 1;
  auto data             = cpu.mem.read_byte(operand_location);

  auto hl_offset = cpu.regs.get_hl();

  cpu.mem.write_one_byte(data, hl_offset);

  cpu.regs.increment_pc_by(2);
}

// Load a into (nn) (extended addressing mode)
auto load_a_nn_ext(CPUEmulator& cpu) -> void
{
  auto operand_location1 = cpu.regs.get_pc() + 1;
  auto operand_location2 = cpu.regs.get_pc() + 2;
  u16 location = (operand_location2 << BYTE_SHIFT) | operand_location1;

  auto a_reg = cpu.regs.get_a();

  cpu.mem.write_one_byte(a_reg, location);

  cpu.regs.increment_pc_by(3);
}

// Load (nn) into a (extended addressing mode)
auto load_nn_a_ext(CPUEmulator& cpu) -> void
{
  auto operand_location1 = cpu.regs.get_pc() + 1;
  auto operand_location2 = cpu.regs.get_pc() + 2;
  u16 location = (operand_location2 << BYTE_SHIFT) | operand_location1;

  u8 data = cpu.mem.read_byte(location);

  cpu.regs.set_a(data);

  cpu.regs.increment_pc_by(3);
}

// Load nn into bc (immediate addressing mode)
auto load_nn_bc_imm(CPUEmulator& cpu) -> void
{
  auto operand_location_value1 = cpu.get_byte_at_pc_with_offset(1);
  auto operand_location_value2 = cpu.get_byte_at_pc_with_offset(2);

  cpu.regs.set_bc(operand_location_value2, operand_location_value1);

  cpu.regs.increment_pc_by(3);
}

// Load nn into de (immediate addressing mode)
auto load_nn_de_imm(CPUEmulator& cpu) -> void
{
  auto operand_location_value1 = cpu.get_byte_at_pc_with_offset(1);
  auto operand_location_value2 = cpu.get_byte_at_pc_with_offset(2);

  cpu.regs.set_de(operand_location_value2, operand_location_value1);

  cpu.regs.increment_pc_by(3);
}

// Load nn into hl (immediate addressing mode)
auto load_nn_hl_imm(CPUEmulator& cpu) -> void
{
  auto operand_location_value1 = cpu.get_byte_at_pc_with_offset(1);
  auto operand_location_value2 = cpu.get_byte_at_pc_with_offset(2);

  cpu.regs.set_hl(operand_location_value2, operand_location_value1);

  cpu.regs.increment_pc_by(3);
}

// Load nn into sp (immediate addressing mode)
auto load_nn_sp_imm(CPUEmulator& cpu) -> void
{
  auto operand_location_value1 = cpu.get_byte_at_pc_with_offset(1);
  auto operand_location_value2 = cpu.get_byte_at_pc_with_offset(2);

  u16 data = (operand_location_value2 << BYTE_SHIFT) | operand_location_value1;

  cpu.regs.set_sp(data);

  cpu.regs.increment_pc_by(3);
}

// Load hl into sp (immediate addressing mode)
auto load_hl_sp(CPUEmulator& cpu) -> void
{
  u16 hl_data = cpu.regs.get_hl();

  cpu.regs.set_sp(hl_data);

  cpu.regs.increment_pc_by(1);
}

// Load hl into (nn) (indirect addressing mode)
auto load_hl_nn_indirect(CPUEmulator& cpu) -> void
{
  u8 h_data = cpu.regs.get_h();
  u8 l_data = cpu.regs.get_l();

  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  u16 nn_indirect_h = cpu.mem.read_byte(nn + 1);
  u16 nn_indirect_l = cpu.mem.read_byte(nn);

  cpu.mem.write_one_byte(h_data, nn_indirect_h);
  cpu.mem.write_one_byte(l_data, nn_indirect_l);

  cpu.regs.increment_pc_by(3);
}

// Load (nn) and (nn + 1) into HL (indirect addressing mode)
auto load_nn_hl_indirect(CPUEmulator& cpu) -> void
{

  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  u16 nn_indirect_h = cpu.mem.read_byte(nn + 1);
  u16 nn_indirect_l = cpu.mem.read_byte(nn);

  cpu.regs.set_h(nn_indirect_h);
  cpu.regs.set_l(nn_indirect_l);

  cpu.regs.increment_pc_by(3);
}

// Stack push operation
auto push_af(CPUEmulator& cpu) -> void
{
  auto af = cpu.regs.get_af();
  cpu.push_two_bytes(af);

  cpu.regs.increment_pc_by(1);
}

// Stack push operation
auto push_bc(CPUEmulator& cpu) -> void
{
  auto bc = cpu.regs.get_bc();
  cpu.push_two_bytes(bc);

  cpu.regs.increment_pc_by(1);
}

// Stack push operation
auto push_de(CPUEmulator& cpu) -> void
{
  auto de = cpu.regs.get_de();
  cpu.push_two_bytes(de);

  cpu.regs.increment_pc_by(1);
}

// Stack push operation
auto push_hl(CPUEmulator& cpu) -> void
{
  auto hl = cpu.regs.get_hl();
  cpu.push_two_bytes(hl);

  cpu.regs.increment_pc_by(1);
}

// Stack pop operation
auto pop_af(CPUEmulator& cpu) -> void
{
  cpu.regs.set_f(cpu.mem.read_byte(cpu.regs.sp++));
  cpu.regs.set_a(cpu.mem.read_byte(cpu.regs.sp++));

  cpu.regs.increment_pc_by(1);
}

// Stack pop operation
auto pop_bc(CPUEmulator& cpu) -> void
{
  cpu.regs.set_c(cpu.mem.read_byte(cpu.regs.sp++));
  cpu.regs.set_b(cpu.mem.read_byte(cpu.regs.sp++));

  cpu.regs.increment_pc_by(1);
}

// Stack pop operation
auto pop_de(CPUEmulator& cpu) -> void
{
  cpu.regs.set_e(cpu.mem.read_byte(cpu.regs.sp++));
  cpu.regs.set_d(cpu.mem.read_byte(cpu.regs.sp++));

  cpu.regs.increment_pc_by(1);
}

// Stack pop operation
auto pop_hl(CPUEmulator& cpu) -> void
{
  cpu.regs.set_l(cpu.mem.read_byte(cpu.regs.sp++));
  cpu.regs.set_h(cpu.mem.read_byte(cpu.regs.sp++));

  cpu.regs.increment_pc_by(1);
}

// Simple nop skip
auto nop(CPUEmulator& cpu) -> void
{
  cpu.regs.increment_pc_by(1);
}

// If we run this opcode-handler, Z80 stops!
auto halt(CPUEmulator& cpu) -> void
{
  qDebug() << "HALT DETECTED!!!\n SHUTTING DOWN!!!";

  cpu.halt_detected = true;
}

// Swap byte pair DE with HL
auto exchange_hl_de(CPUEmulator& cpu) -> void
{
  auto de = cpu.regs.get_de();
  auto hl = cpu.regs.get_hl();

  cpu.regs.set_de(hl);
  cpu.regs.set_hl(de);

  cpu.regs.increment_pc_by(1);
}

// Swap byte pair AF with AF'
auto exchange_af_af(CPUEmulator& cpu) -> void
{
  auto af        = cpu.regs.get_af();
  auto af_shadow = cpu.regs.get_af_shadow();

  cpu.regs.set_af(af_shadow);
  cpu.regs.set_af_shadow(af);

  cpu.regs.increment_pc_by(1);
}

// Exchange BC, DE, and HL with shadow pairs
auto exchange_exx(CPUEmulator& cpu) -> void
{
  // BC <-> BC_shadow
  auto bc        = cpu.regs.get_bc();
  auto bc_shadow = cpu.regs.get_bc_shadow();

  cpu.regs.set_bc(bc_shadow);
  cpu.regs.set_bc_shadow(bc);

  // DE <-> DE_shadow
  auto de        = cpu.regs.get_de();
  auto de_shadow = cpu.regs.get_de_shadow();

  cpu.regs.set_de(de_shadow);
  cpu.regs.set_de_shadow(de);

  // HL <-> HL_shadow
  auto hl        = cpu.regs.get_hl();
  auto hl_shadow = cpu.regs.get_hl_shadow();

  cpu.regs.set_hl(hl_shadow);
  cpu.regs.set_hl_shadow(hl);

  cpu.regs.increment_pc_by(1);
}

// ADD value in A to A
auto add_a_and_a(CPUEmulator& cpu) -> void
{
  auto a_reg1 = cpu.regs.get_a();
  auto a_reg2 = cpu.regs.get_a();

  auto u8_max = std::numeric_limits<u8>::max();
  auto u8_min = std::numeric_limits<u8>::min();

  // P/V-flag (overflow)
  if (a_reg2 > 0 && a_reg1 > u8_max - a_reg2)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  // P/V-flag (underflow)
  if (a_reg2 < 0 && a_reg1 < u8_min - a_reg2)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  a_reg1 += a_reg2;

  cpu.regs.set_a(a_reg1);

  // S-flag
  if (a_reg1 < 0)
    cpu.regs.F.set_s_flag();
  else
    cpu.regs.F.clear_s_flag();

  // Z-flag
  if (a_reg1 == 0)
    cpu.regs.F.set_z_flag();
  else
    cpu.regs.F.clear_z_flag();

  // H-flag
  if (cpu.regs.F.is_c_flag_set())
    cpu.regs.F.set_h_flag();
  else
    cpu.regs.F.clear_h_flag();

  // N-flag
  cpu.regs.F.clear_n_flag();

  // C-flag
  if (cpu.regs.F.is_s_flag_set())
    cpu.regs.F.set_c_flag();
  else
    cpu.regs.F.clear_c_flag();

  cpu.regs.increment_pc_by(1);
}

// ADD value in B to A
auto add_a_and_b(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  auto b_reg = cpu.regs.get_b();

  auto u8_max = std::numeric_limits<u8>::max();
  auto u8_min = std::numeric_limits<u8>::min();

  // P/V-flag (overflow)
  if (b_reg > 0 && a_reg > u8_max - b_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  // P/V-flag (underflow)
  if (b_reg < 0 && a_reg < u8_min - b_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  a_reg += b_reg;

  cpu.regs.set_a(a_reg);

  // S-flag
  if (a_reg < 0)
    cpu.regs.F.set_s_flag();
  else
    cpu.regs.F.clear_s_flag();

  // Z-flag
  if (a_reg == 0)
    cpu.regs.F.set_z_flag();
  else
    cpu.regs.F.clear_z_flag();

  // H-flag
  if (cpu.regs.F.is_c_flag_set())
    cpu.regs.F.set_h_flag();
  else
    cpu.regs.F.clear_h_flag();

  // N-flag
  cpu.regs.F.clear_n_flag();

  // C-flag
  if (cpu.regs.F.is_s_flag_set())
    cpu.regs.F.set_c_flag();
  else
    cpu.regs.F.clear_c_flag();

  cpu.regs.increment_pc_by(1);
}

// ADD value in C to A
auto add_a_and_c(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  auto c_reg = cpu.regs.get_c();

  auto u8_max = std::numeric_limits<u8>::max();
  auto u8_min = std::numeric_limits<u8>::min();

  // P/V-flag (overflow)
  if (c_reg > 0 && a_reg > u8_max - c_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  // P/V-flag (underflow)
  if (c_reg < 0 && a_reg < u8_min - c_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  a_reg += c_reg;

  cpu.regs.set_a(a_reg);

  // S-flag
  if (a_reg < 0)
    cpu.regs.F.set_s_flag();
  else
    cpu.regs.F.clear_s_flag();

  // Z-flag
  if (a_reg == 0)
    cpu.regs.F.set_z_flag();
  else
    cpu.regs.F.clear_z_flag();

  // H-flag
  if (cpu.regs.F.is_c_flag_set())
    cpu.regs.F.set_h_flag();
  else
    cpu.regs.F.clear_h_flag();

  // N-flag
  cpu.regs.F.clear_n_flag();

  // C-flag
  if (cpu.regs.F.is_s_flag_set())
    cpu.regs.F.set_c_flag();
  else
    cpu.regs.F.clear_c_flag();

  cpu.regs.increment_pc_by(1);
}

// ADD value in D to A
auto add_a_and_d(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  auto d_reg = cpu.regs.get_d();

  auto u8_max = std::numeric_limits<u8>::max();
  auto u8_min = std::numeric_limits<u8>::min();

  // P/V-flag (overflow)
  if (d_reg > 0 && a_reg > u8_max - d_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  // P/V-flag (underflow)
  if (d_reg < 0 && a_reg < u8_min - d_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  a_reg += d_reg;

  cpu.regs.set_a(a_reg);

  // S-flag
  if (a_reg < 0)
    cpu.regs.F.set_s_flag();
  else
    cpu.regs.F.clear_s_flag();

  // Z-flag
  if (a_reg == 0)
    cpu.regs.F.set_z_flag();
  else
    cpu.regs.F.clear_z_flag();

  // H-flag
  if (cpu.regs.F.is_c_flag_set())
    cpu.regs.F.set_h_flag();
  else
    cpu.regs.F.clear_h_flag();

  // N-flag
  cpu.regs.F.clear_n_flag();

  // C-flag
  if (cpu.regs.F.is_s_flag_set())
    cpu.regs.F.set_c_flag();
  else
    cpu.regs.F.clear_c_flag();

  cpu.regs.increment_pc_by(1);
}

// ADD value in E to A
auto add_a_and_e(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  auto e_reg = cpu.regs.get_e();

  auto u8_max = std::numeric_limits<u8>::max();
  auto u8_min = std::numeric_limits<u8>::min();

  // P/V-flag (overflow)
  if (e_reg > 0 && a_reg > u8_max - e_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  // P/V-flag (underflow)
  if (e_reg < 0 && a_reg < u8_min - e_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  a_reg += e_reg;

  cpu.regs.set_a(a_reg);

  // S-flag
  if (a_reg < 0)
    cpu.regs.F.set_s_flag();
  else
    cpu.regs.F.clear_s_flag();

  // Z-flag
  if (a_reg == 0)
    cpu.regs.F.set_z_flag();
  else
    cpu.regs.F.clear_z_flag();

  // H-flag
  if (cpu.regs.F.is_c_flag_set())
    cpu.regs.F.set_h_flag();
  else
    cpu.regs.F.clear_h_flag();

  // N-flag
  cpu.regs.F.clear_n_flag();

  // C-flag
  if (cpu.regs.F.is_s_flag_set())
    cpu.regs.F.set_c_flag();
  else
    cpu.regs.F.clear_c_flag();

  cpu.regs.increment_pc_by(1);
}

// ADD value in H to A
auto add_a_and_h(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  auto h_reg = cpu.regs.get_h();

  auto u8_max = std::numeric_limits<u8>::max();
  auto u8_min = std::numeric_limits<u8>::min();

  // P/V-flag (overflow)
  if (h_reg > 0 && a_reg > u8_max - h_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  // P/V-flag (underflow)
  if (h_reg < 0 && a_reg < u8_min - h_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  a_reg += h_reg;

  cpu.regs.set_a(a_reg);

  // S-flag
  if (a_reg < 0)
    cpu.regs.F.set_s_flag();
  else
    cpu.regs.F.clear_s_flag();

  // Z-flag
  if (a_reg == 0)
    cpu.regs.F.set_z_flag();
  else
    cpu.regs.F.clear_z_flag();

  // H-flag
  if (cpu.regs.F.is_c_flag_set())
    cpu.regs.F.set_h_flag();
  else
    cpu.regs.F.clear_h_flag();

  // N-flag
  cpu.regs.F.clear_n_flag();

  // C-flag
  if (cpu.regs.F.is_s_flag_set())
    cpu.regs.F.set_c_flag();
  else
    cpu.regs.F.clear_c_flag();

  cpu.regs.increment_pc_by(1);
}

// ADD value in L to A
auto add_a_and_l(CPUEmulator& cpu) -> void
{
  auto a_reg = cpu.regs.get_a();
  auto l_reg = cpu.regs.get_l();

  auto u8_max = std::numeric_limits<u8>::max();
  auto u8_min = std::numeric_limits<u8>::min();

  // P/V-flag (overflow)
  if (l_reg > 0 && a_reg > u8_max - l_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  // P/V-flag (underflow)
  if (l_reg < 0 && a_reg < u8_min - l_reg)
    cpu.regs.F.set_pv_flag();
  else
    cpu.regs.F.clear_pv_flag();

  a_reg += l_reg;

  cpu.regs.set_a(a_reg);

  // S-flag
  if (a_reg < 0)
    cpu.regs.F.set_s_flag();
  else
    cpu.regs.F.clear_s_flag();

  // Z-flag
  if (a_reg == 0)
    cpu.regs.F.set_z_flag();
  else
    cpu.regs.F.clear_z_flag();

  // H-flag
  if (cpu.regs.F.is_c_flag_set())
    cpu.regs.F.set_h_flag();
  else
    cpu.regs.F.clear_h_flag();

  // N-flag
  cpu.regs.F.clear_n_flag();

  // C-flag
  if (cpu.regs.F.is_s_flag_set())
    cpu.regs.F.set_c_flag();
  else
    cpu.regs.F.clear_c_flag();

  cpu.regs.increment_pc_by(1);
}

//Additions to look over
auto jump_nn_immed(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  cpu.regs.set_pc(nn);
} 

auto jump_carry_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(cpu.regs.F.is_c_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_c_flag();
    cpu.regs.increment_pc_by(3);

}

auto jump_nocarry_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(!cpu.regs.F.is_c_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_c_flag();
    cpu.regs.increment_pc_by(3);

}

auto jump_zero_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(cpu.regs.F.is_z_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_z_flag();
    cpu.regs.increment_pc_by(3);
}

auto jump_nonzero_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(!cpu.regs.F.is_z_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_z_flag();
    cpu.regs.increment_pc_by(3);
}

//Think i did these right
auto jump_parity_odd_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(!cpu.regs.F.is_pv_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_pv_flag();
    cpu.regs.increment_pc_by(3);
} 

auto jump_parity_even_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(cpu.regs.F.is_pv_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_pv_flag();
    cpu.regs.increment_pc_by(3);
} 

auto jump_sign_neg_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(cpu.regs.F.is_s_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_s_flag();
    cpu.regs.increment_pc_by(3);
}

auto jump_sign_pos_nn(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  if(!cpu.regs.F.is_s_flag_set())
    cpu.regs.set_pc(nn);
  else
    cpu.regs.F.clear_s_flag();
    cpu.regs.increment_pc_by(3);
}

//Calls
auto call_nn_immed(CPUEmulator& cpu) -> void
{
  u8 upper = cpu.get_byte_at_pc_with_offset(2);
  u8 lower = cpu.get_byte_at_pc_with_offset(1);

  u16 nn = (upper << BYTE_SHIFT) | lower;

  //Read this in documentation to increment before pushing to stack
  //not sure if this is the proper way or if it should even be here lol
  cpu.regs.increment_pc_by(3);
  cpu.push_two_bytes(nn);

  upper = cpu.get_byte_at_pc_with_offset(2);
  lower = cpu.get_byte_at_pc_with_offset(1);

  nn = (upper << BYTE_SHIFT) | lower;

  cpu.regs.set_pc(nn);

} 