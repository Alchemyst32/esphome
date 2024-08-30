#pragma once

#include "esphome/components/button/button.h"
#include "../A0001_Comp_03.h"

namespace esphome {
namespace A0001_Comp_03 {

class ResetButton : public button::Button, public Parented<A0001_Comp_03Component> {
 public:
  ResetButton() = default;

 protected:
  void press_action() override;
};

}  // namespace A0001_Comp_03
}  // namespace esphome
