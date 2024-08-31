#include "esphome/core/log.h"
#include "A0002_Alex_binary_output.h"

namespace esphome {
namespace A0002_Alex_binary_output {

static const char *TAG = "A0002_Alex_binary_output.binary_output";

void EmptyBinaryOutput::setup(){

}

void EmptyBinaryOutput::write_state(bool state){

}

void EmptyBinaryOutput::dump_config() {
    ESP_LOGCONFIG(TAG, "Custom binary output");
}

} //namespace A0002_Alex_binary_output
} //namespace esphome

