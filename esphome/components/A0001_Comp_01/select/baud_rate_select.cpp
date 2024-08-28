#include "baud_rate_select.h"

namespace esphome {
namespace A0001_Comp_01 {

void BaudRateSelect::control(const std::string &value) {
  this->publish_state(value);
  this->parent_->set_baud_rate(state);
}

}  // namespace A0001_Comp_01
}  // namespace esphome
