#pragma once

#include "esphome/components/select/select.h"
#include "../A0001_Comp_01.h"

namespace esphome {
namespace A0001_Comp_01 {

class LightOutControlSelect : public select::Select, public Parented<A0001_Comp_01Component> {
 public:
  LightOutControlSelect() = default;

 protected:
  void control(const std::string &value) override;
};

}  // namespace A0001_Comp_01
}  // namespace esphome
