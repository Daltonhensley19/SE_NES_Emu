#include "../src/emu_sources/doctest.h"
#include "../src/emu_sources/registers.h"
#include "../src/emu_sources/emu.h"

TEST_CASE("Testing the `is_even_parity` method")
{
  GIVEN("A even and odd byte")
  {
    u8 byte_even_bits = 0b00001111;
    u8 byte_odd_bits  = 0b00001011;

    Registers regs{};

    WHEN("Method tries to check byte parity")
    {
      THEN("Parity is correctly determined")
      {
        CHECK(regs.is_even_parity(byte_even_bits));
        CHECK(!regs.is_even_parity(byte_odd_bits));
      }
    }
  }
}

TEST_CASE("Testing the `set_a` and `get_a` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_a` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_a(data);
        CHECK(regs.get_a() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_b` and `get_b` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_b` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_b(data);
        CHECK(regs.get_b() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_c` and `get_c` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_c` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_c(data);
        CHECK(regs.get_c() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_d` and `get_d` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_d` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_d(data);
        CHECK(regs.get_d() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_e` and `get_e` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_e` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_e(data);
        CHECK(regs.get_e() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_h` and `get_h` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_h` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_h(data);
        CHECK(regs.get_h() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_l` and `get_l` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_l` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_l(data);
        CHECK(regs.get_l() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_a_shadow` and `get_a_shadow` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_a_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_a_shadow(data);
        CHECK(regs.get_a_shadow() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_b_shadow` and `get_b_shadow` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_b_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_b_shadow(data);
        CHECK(regs.get_b_shadow() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_c_shadow` and `get_c_shadow` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_c_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_c_shadow(data);
        CHECK(regs.get_c_shadow() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_d_shadow` and `get_d_shadow` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_d_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_d_shadow(data);
        CHECK(regs.get_d_shadow() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_e_shadow` and `get_e_shadow` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_e_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_e_shadow(data);
        CHECK(regs.get_e_shadow() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_h_shadow` and `get_h_shadow` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_h_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_h_shadow(data);
        CHECK(regs.get_h_shadow() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_l_shadow` and `get_l_shadow` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xFA;

    Registers regs{};

    WHEN("Method tries to set `reg_l_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_l_shadow(data);
        CHECK(regs.get_l_shadow() == 0xFA);
      }
    }
  }
}

TEST_CASE("Testing the `set_sp` and `get_sp` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_sp` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_sp(data);
        CHECK(regs.get_sp() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_pc` and `get_pc` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_pc` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_pc(data);
        CHECK(regs.get_pc() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_ix` and `get_ix` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_ix` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_ix(data);
        CHECK(regs.get_ix() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_iy` and `get_iy` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_iy` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_iy(data);
        CHECK(regs.get_iy() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_i` and `get_i` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xEF;

    Registers regs{};

    WHEN("Method tries to set `reg_i` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_i(data);
        CHECK(regs.get_i() == 0xEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_r` and `get_r` method")
{
  GIVEN("A byte of data")
  {
    u8 data = 0xEF;

    Registers regs{};

    WHEN("Method tries to set `reg_r` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_r(data);
        CHECK(regs.get_r() == 0xEF);
      }
    }
  }
}

TEST_CASE("Testing the `increment_pc_by` method")
{
  GIVEN("An offet as u16 and pc starting at index zero")
  {
    u16 offset = 5;

    Registers regs{};
    regs.set_pc(0);

    WHEN("Method tries to increment `pc` using `offset`")
    {
      THEN("We increment pc via offset correctly!")
      {
        regs.increment_pc_by(offset);
        CHECK(regs.get_pc() == 5);
      }
    }
  }
}

TEST_CASE("Testing the `set_hl` and `get_hl` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_hl` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_hl(data);
        CHECK(regs.get_hl() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_bc` and `get_bc` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_bc` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_bc(data);
        CHECK(regs.get_bc() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_de` and `get_de` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_de` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_de(data);
        CHECK(regs.get_de() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_af` and `get_af` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_af` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_af(data);
        CHECK(regs.get_af() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_hl_shadow` and `get_hl_shadow` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_hl_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_hl_shadow(data);
        CHECK(regs.get_hl_shadow() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_bc_shadow` and `get_bc_shadow` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_bc_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_bc_shadow(data);
        CHECK(regs.get_bc_shadow() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_de_shadow` and `get_de_shadow` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_de_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_de_shadow(data);
        CHECK(regs.get_de_shadow() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `set_af_shadow` and `get_af_shadow` method")
{
  GIVEN("A two bytes of data")
  {
    u16 data = 0xBEEF;

    Registers regs{};

    WHEN("Method tries to set `reg_af_shadow` using `data`")
    {
      THEN("Setter and getter works correctly!")
      {
        regs.set_af_shadow(data);
        CHECK(regs.get_af_shadow() == 0xBEEF);
      }
    }
  }
}

TEST_CASE("Testing the `is_c_flag_set`, `clear_c_flag` and `set_c_flag` method")
{
  GIVEN("A byte of data for flag")
  {

    Flags flags{};

    WHEN("Method tries to set `*_c_flag`")
    {
      THEN("`*_c_flag` methods work correctly!")
      {
        flags.set_c_flag();
        CHECK(flags.is_c_flag_set());

        flags.clear_c_flag();
        CHECK(!flags.is_c_flag_set());
      }
    }
  }
}

TEST_CASE("Testing the `is_n_flag_set`, `clear_n_flag` and `set_n_flag` method")
{
  GIVEN("A byte of data for flag")
  {

    Flags flags{};

    WHEN("Method tries to set `*_n_flag`")
    {
      THEN("`*_n_flag` methods work correctly!")
      {
        flags.set_n_flag();
        CHECK(flags.is_n_flag_set());

        flags.clear_n_flag();
        CHECK(!flags.is_n_flag_set());
      }
    }
  }
}

TEST_CASE(
  "Testing the `is_pv_flag_set`, `clear_pv_flag` and `set_pv_flag` method")
{
  GIVEN("A byte of data for flag")
  {

    Flags flags{};

    WHEN("Method tries to set `*_pv_flag`")
    {
      THEN("`*_pv_flag` methods work correctly!")
      {
        flags.set_pv_flag();
        CHECK(flags.is_pv_flag_set());

        flags.clear_pv_flag();
        CHECK(!flags.is_pv_flag_set());
      }
    }
  }
}

TEST_CASE("Testing the `is_h_flag_set`, `clear_h_flag` and `set_h_flag` method")
{
  GIVEN("A byte of data for flag")
  {

    Flags flags{};

    WHEN("Method tries to set `*_h_flag`")
    {
      THEN("`*_h_flag` methods work correctly!")
      {
        flags.set_h_flag();
        CHECK(flags.is_h_flag_set());

        flags.clear_h_flag();
        CHECK(!flags.is_h_flag_set());
      }
    }
  }
}

TEST_CASE("Testing the `is_z_flag_set`, `clear_z_flag` and `set_z_flag` method")
{
  GIVEN("A byte of data for flag")
  {

    Flags flags{};

    WHEN("Method tries to set `*_z_flag`")
    {
      THEN("`*_z_flag` methods work correctly!")
      {
        flags.set_z_flag();
        CHECK(flags.is_z_flag_set());

        flags.clear_z_flag();
        CHECK(!flags.is_z_flag_set());
      }
    }
  }
}

TEST_CASE("Testing the `is_s_flag_set`, `clear_s_flag` and `set_s_flag` method")
{
  GIVEN("A byte of data for flag")
  {

    Flags flags{};

    WHEN("Method tries to set `*_s_flag`")
    {
      THEN("`*_s_flag` methods work correctly!")
      {
        flags.set_s_flag();
        CHECK(flags.is_s_flag_set());

        flags.clear_s_flag();
        CHECK(!flags.is_s_flag_set());
      }
    }
  }
}

TEST_CASE("Testing the `batch_set`, `batch_get` method")
{
  GIVEN("A byte of data for flag")
  {

    Flags flags{};

    WHEN("Method tries to set `flags`")
    {
      THEN("`flags` getter and setter methods work correctly!")
      {
        flags.batch_set(0b00000001);

        CHECK(flags.batch_get() == 0b00000001);
      }
    }
  }
}

TEST_CASE("Testing the `push_two_bytes`, `pop_two_bytes` method")
{
  GIVEN("A two bytes of data for pushing/popping")
  {
    u16 data = 0xFADE;
    
    CPUEmulator cpu{};

    WHEN("Method tries to push and pop `data`")
    {
      THEN("Push and pop two bytes works correctly!")
      {
        cpu.push_two_bytes(data);

        u16 old_data = cpu.pop_two_bytes();

        CHECK(old_data == 0xFADE);
      }
    }
  }
}

TEST_CASE("Testing the `push_byte`, `pop_byte` method")
{
  GIVEN("A byte of data for pushing/popping")
  {
    u8 data = 0xFA;
    
    CPUEmulator cpu{};

    WHEN("Method tries to push and pop `data`")
    {
      THEN("Push and pop one byte works correctly!")
      {
        cpu.push_byte(data);

        u16 old_data = cpu.pop_byte();

        CHECK(old_data == 0xFA);
      }
    }
  }
}
