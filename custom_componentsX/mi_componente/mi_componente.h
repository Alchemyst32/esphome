#pragma once
#include "esphome.h"

class MiComponente : public PollingComponent {
 public:
  MiComponente() : PollingComponent(1000) {}  // se ejecuta cada 1000ms

  void setup() override {
    ESP_LOGD("mi_componente", "Setup completo");
  }

  void update() override {
    ESP_LOGD("mi_componente", "Update cada segundo");
  }
};
