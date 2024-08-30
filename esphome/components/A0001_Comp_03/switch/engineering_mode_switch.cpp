#include "engineering_mode_switch.h"

namespace esphome {
namespace A0001_Comp_03 {

void EngineeringModeSwitch::write_state(bool state) {
  this->publish_state(state);
  this->parent_->set_engineering_mode(state);
}

}  // namespace A0001_Comp_03
}  // namespace esphome
