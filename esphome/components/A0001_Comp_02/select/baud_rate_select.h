#pragma once

#include "esphome/components/select/select.h"
#include "../A0001_Comp_02.h"

namespace esphome {
namespace A0001_Comp_02 {

class BaudRateSelect : public select::Select, public Parented<A0001_Comp_02Component> {
 public:
  BaudRateSelect() = default;

 protected:
  void control(const std::string &value) override;
};

}  // namespace A0001_Comp_02
}  // namespace esphome
