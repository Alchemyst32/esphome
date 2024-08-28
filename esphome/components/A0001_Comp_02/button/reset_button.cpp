#include "reset_button.h"

namespace esphome {
namespace A0001_Comp_02 {

void ResetButton::press_action() { this->parent_->factory_reset(); }

}  // namespace A0001_Comp_02
}  // namespace esphome
