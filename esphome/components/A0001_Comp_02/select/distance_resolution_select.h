#pragma once

#include "esphome/components/select/select.h"
#include "../A0001_Comp_02.h"

namespace esphome {
namespace A0001_Comp_02 {

class DistanceResolutionSelect : public select::Select, public Parented<A0001_Comp_02Component> {
 public:
  DistanceResolutionSelect() = default;

 protected:
  void control(const std::string &value) override;
};

}  // namespace A0001_Comp_02
}  // namespace esphome
