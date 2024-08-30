#pragma once

#include "esphome/core/automation.h"
#include "esphome/core/component.h"
#include "A0001_Comp_03.h"

namespace esphome {
namespace A0001_Comp_03 {

template<typename... Ts> class BluetoothPasswordSetAction : public Action<Ts...> {
 public:
  explicit BluetoothPasswordSetAction(A0001_Comp_03Component *A0001_Comp_03_comp) : A0001_Comp_03_comp_(A0001_Comp_03_comp) {}
  TEMPLATABLE_VALUE(std::string, password)

  void play(Ts... x) override { this->A0001_Comp_03_comp_->set_bluetooth_password(this->password_.value(x...)); }

 protected:
  A0001_Comp_03Component *A0001_Comp_03_comp_;
};

}  // namespace A0001_Comp_03
}  // namespace esphome
