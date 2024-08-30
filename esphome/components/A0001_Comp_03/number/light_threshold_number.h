#pragma once

#include "esphome/components/number/number.h"
#include "../A0001_Comp_03.h"

namespace esphome {
namespace A0001_Comp_03 {

class LightThresholdNumber : public number::Number, public Parented<A0001_Comp_03Component> {
 public:
  LightThresholdNumber() = default;

 protected:
  void control(float value) override;
};

}  // namespace A0001_Comp_03
}  // namespace esphome
