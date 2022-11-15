#pragma once

#include "types.h"

class Flags
{
private:
  u8 byte;

public:

  Flags();

  int is_c_flag_set() const;
  int is_n_flag_set() const;
  int is_pv_flag_set() const;
  int is_h_flag_set() const;
  int is_z_flag_set() const;
  int is_s_flag_set() const;

  void set_c_flag();
  void set_n_flag();
  void set_pv_flag();
  void set_h_flag();
  void set_z_flag();
  void set_s_flag(); 
  
  void clear_c_flag();
  void clear_n_flag();
  void clear_pv_flag();
  void clear_h_flag();
  void clear_z_flag();
  void clear_s_flag();

  void batch_set(u8 byte);
  u8 batch_get() const;
};
