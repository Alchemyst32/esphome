#include "restart_button.h"

namespace esphome {
namespace A0001_Comp_03 {

void RestartButton::press_action() { this->parent_->restart_and_read_all_info(); }

}  // namespace A0001_Comp_03
}  // namespace esphome
