#include "light_out_control_select.h"

namespace esphome {
namespace A0001_Comp_02 {

void LightOutControlSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_light_out_control();
}

}  // namespace A0001_Comp_02
}  // namespace esphome
