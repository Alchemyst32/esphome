import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor

A0_my_component_ns = cg.esphome_ns.namespace("A0_my_component")
A0_MyComponent = A0_my_component_ns.class_("A0_MyComponent", sensor.Sensor)

CONFIG_SCHEMA = sensor.sensor_schema(A0_MyComponent)
