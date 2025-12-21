#pragma once
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace A0_my_component {

class A0_MyComponent : public sensor::Sensor {
 public:
  void setup();// override;
  void loop();// override;
};

}  // namespace my_component
}  // namespace esphome
