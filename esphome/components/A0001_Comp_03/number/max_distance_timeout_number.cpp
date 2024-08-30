#include "max_distance_timeout_number.h"

namespace esphome {
namespace A0001_Comp_03 {

void MaxDistanceTimeoutNumber::control(float value) {
  this->publish_state(value);
  this->parent_->set_max_distances_timeout();
}

}  // namespace A0001_Comp_03
}  // namespace esphome
