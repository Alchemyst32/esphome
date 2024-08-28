#pragma once

#include "esphome/components/switch/switch.h"
#include "../A0001_Comp_02.h"

namespace esphome {
namespace A0001_Comp_02 {

class EngineeringModeSwitch : public switch_::Switch, public Parented<A0001_Comp_02Component> {
 public:
  EngineeringModeSwitch() = default;

 protected:
  void write_state(bool state) override;
};

}  // namespace A0001_Comp_02
}  // namespace esphome
