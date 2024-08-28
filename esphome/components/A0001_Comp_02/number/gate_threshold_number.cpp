#include "gate_threshold_number.h"

namespace esphome {
namespace A0001_Comp_02 {

GateThresholdNumber::GateThresholdNumber(uint8_t gate) : gate_(gate) {}

void GateThresholdNumber::control(float value) {
  this->publish_state(value);
  this->parent_->set_gate_threshold(this->gate_);
}

}  // namespace A0001_Comp_02
}  // namespace esphome
