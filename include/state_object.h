#pragma once

#include <string>
#include <variant>

#include "types.h"


// Abstract type which will be the base class for registers and flags
//
// It has a `state` which is either a `u8` or `u16`, but not both. 
class StateObject
{
private:
  std::variant<u8, u16> state;

public: 
    virtual std::variant<u8, u16> get_state() const = 0;
    virtual void set_state(std::variant<u8, u16> state) = 0;
};