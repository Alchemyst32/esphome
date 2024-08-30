import esphome.codegen as cg
from esphome.components import binary_sensor
#from esphome.components import switch
import esphome.config_validation as cv
from esphome.const import (
    DEVICE_CLASS_MOTION,
    DEVICE_CLASS_OCCUPANCY,
    DEVICE_CLASS_PRESENCE,
 #   DEVICE_CLASS_SWITCH, #ALEX /////////////////////////////////////////////////////////////////////////////////////////////////
    ENTITY_CATEGORY_DIAGNOSTIC,
    ICON_MOTION_SENSOR,
    ICON_ACCOUNT,
    CONF_HAS_TARGET,
    CONF_HAS_MOVING_TARGET,
    CONF_HAS_STILL_TARGET,
) 
from . import CONF_A0001_Comp_03_ID, A0001_Comp_03Component

DEPENDENCIES = ["A0001_Comp_03"]
CONF_OUT_PIN_PRESENCE_STATUS = "out_pin_presence_status"

CONF_OUT_ALEX_SIGNAL_STATUS = "out_pin_Alex_Signal_status" #ALEX//////////

CONFIG_SCHEMA = {
    cv.GenerateID(CONF_A0001_Comp_03_ID): cv.use_id(A0001_Comp_03Component),
    cv.Optional(CONF_HAS_TARGET): binary_sensor.binary_sensor_schema(
        device_class=DEVICE_CLASS_OCCUPANCY,
        icon=ICON_ACCOUNT,
    ),
    cv.Optional(CONF_HAS_MOVING_TARGET): binary_sensor.binary_sensor_schema(
        device_class=DEVICE_CLASS_MOTION,
        icon=ICON_MOTION_SENSOR,
    ),
    cv.Optional(CONF_HAS_STILL_TARGET): binary_sensor.binary_sensor_schema(
        device_class=DEVICE_CLASS_OCCUPANCY,
        icon=ICON_MOTION_SENSOR,
    ),
    cv.Optional(CONF_OUT_PIN_PRESENCE_STATUS): binary_sensor.binary_sensor_schema(
        device_class=DEVICE_CLASS_PRESENCE,
        entity_category=ENTITY_CATEGORY_DIAGNOSTIC,
        icon=ICON_ACCOUNT,
    ),
    #ALEX/////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cv.Optional(CONF_OUT_ALEX_SIGNAL_STATUS): binary_sensor.binary_sensor_schema(
        device_class=DEVICE_CLASS_PRESENCE,
        entity_category=ENTITY_CATEGORY_DIAGNOSTIC,
        icon=ICON_ACCOUNT,
    ),
    #ALEX/////////////////////////////////////////////////////////////////////////////////////////////////////////////
}


async def to_code(config):
    A0001_Comp_03_component = await cg.get_variable(config[CONF_A0001_Comp_03_ID])
    if has_target_config := config.get(CONF_HAS_TARGET):
        sens = await binary_sensor.new_binary_sensor(has_target_config)
        cg.add(A0001_Comp_03_component.set_target_binary_sensor(sens))
    if has_moving_target_config := config.get(CONF_HAS_MOVING_TARGET):
        sens = await binary_sensor.new_binary_sensor(has_moving_target_config)
        cg.add(A0001_Comp_03_component.set_moving_target_binary_sensor(sens))
    if has_still_target_config := config.get(CONF_HAS_STILL_TARGET):
        sens = await binary_sensor.new_binary_sensor(has_still_target_config)
        cg.add(A0001_Comp_03_component.set_still_target_binary_sensor(sens))
    if out_pin_presence_status_config := config.get(CONF_OUT_PIN_PRESENCE_STATUS):
        sens = await binary_sensor.new_binary_sensor(out_pin_presence_status_config)
        cg.add(A0001_Comp_03_component.set_out_pin_presence_status_binary_sensor(sens))
    #ALEX/////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if out_pin_Alex_Signal_status_config := config.get(CONF_OUT_ALEX_SIGNAL_STATUS):
        sens = await binary_sensor.new_binary_sensor(out_pin_Alex_Signal_status_config)
        cg.add(A0001_Comp_03_component.set_out_pin_presence_status_binary_sensor(sens))

    #ALEX/////////////////////////////////////////////////////////////////////////////////////////////////////////////
