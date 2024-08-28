#pragma once

#include "esphome/components/button/button.h"
#include "../A0001_Comp_02.h"

namespace esphome {
namespace A0001_Comp_02 {

class RestartButton : public button::Button, public Parented<A0001_Comp_02Component> {
 public:
  RestartButton() = default;

 protected:
  void press_action() override;
};

}  // namespace A0001_Comp_02
}  // namespace esphome
