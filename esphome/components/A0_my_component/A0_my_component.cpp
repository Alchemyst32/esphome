#include "A0_my_component.h"
#include "esphome/core/log.h"

namespace esphome {
namespace A0_my_component {

static const char *TAG = "A0_my_component";

void A0_MyComponent::setup() {
  ESP_LOGI(TAG, "A0_MyComponent setup");
}

void A0_MyComponent::loop() {
  this->publish_state(42.0);
}

}  // namespace my_component
}  // namespace esphome
