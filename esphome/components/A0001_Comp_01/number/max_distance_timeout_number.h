#pragma once

#include "esphome/components/number/number.h"
#include "../A0001_Comp_01.h"

namespace esphome {
namespace A0001_Comp_01 {

class MaxDistanceTimeoutNumber : public number::Number, public Parented<A0001_Comp_01Component> {
 public:
  MaxDistanceTimeoutNumber() = default;

 protected:
  void control(float value) override;
};

}  // namespace A0001_Comp_01
}  // namespace esphome
