#pragma once

#include "esphome/components/switch/switch.h"
#include "../A0001_Comp_03.h"

namespace esphome {
namespace A0001_Comp_03 {

class BluetoothSwitch : public switch_::Switch, public Parented<A0001_Comp_03Component> {
 public:
  BluetoothSwitch() = default;

 protected:
  void write_state(bool state) override;
};

}  // namespace A0001_Comp_03
}  // namespace esphome
