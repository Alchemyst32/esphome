#include "light_threshold_number.h"

namespace esphome {
namespace A0001_Comp_02 {

void LightThresholdNumber::control(float value) {
  this->publish_state(value);
  this->parent_->set_light_out_control();
}

}  // namespace A0001_Comp_02
}  // namespace esphome
