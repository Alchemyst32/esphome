#include "distance_resolution_select.h"

namespace esphome {
namespace A0001_Comp_01 {

void DistanceResolutionSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_distance_resolution(state);
}

}  // namespace A0001_Comp_01
}  // namespace esphome
