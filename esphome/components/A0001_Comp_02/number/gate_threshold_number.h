#pragma once

#include "esphome/components/number/number.h"
#include "../A0001_Comp_02.h"

namespace esphome {
namespace A0001_Comp_02 {

class GateThresholdNumber : public number::Number, public Parented<A0001_Comp_02Component> {
 public:
  GateThresholdNumber(uint8_t gate);

 protected:
  uint8_t gate_;
  void control(float value) override;
};

}  // namespace A0001_Comp_02
}  // namespace esphome
