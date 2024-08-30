#include "bluetooth_switch.h"

namespace esphome {
namespace A0001_Comp_03 {

void BluetoothSwitch::write_state(bool state) {
  this->publish_state(state);
  this->parent_->set_bluetooth(state);
}

}  // namespace A0001_Comp_03
}  // namespace esphome
