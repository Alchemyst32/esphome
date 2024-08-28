#include "query_button.h"

namespace esphome {
namespace A0001_Comp_01 {

void QueryButton::press_action() { this->parent_->read_all_info(); }

}  // namespace A0001_Comp_01
}  // namespace esphome
