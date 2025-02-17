#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/binary_output.h"

namespace esphome {
namespace A0002_Alex_binary_output {

class EmptyBinaryOutput : public output::BinaryOutput, public Component {
 public:
  void setup() override;
  void write_state(bool state) override;
  void dump_config() override;
};


} //namespace A0002_Alex_binary_output
} //namespace esphome