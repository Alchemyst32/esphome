#pragma once

#include "esphome/components/button/button.h"
#include "../A0001_Comp_01.h"

namespace esphome {
namespace A0001_Comp_01 {

class QueryButton : public button::Button, public Parented<A0001_Comp_01Component> {
 public:
  QueryButton() = default;

 protected:
  void press_action() override;
};

}  // namespace A0001_Comp_01
}  // namespace esphome
