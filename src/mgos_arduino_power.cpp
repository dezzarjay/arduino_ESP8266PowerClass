//
// Created by DJ on 29/04/18.
//
#include "mgos_arduino_power.h"

ESP8266PowerClass *mgos_ESP8266PowerClass_create(int8_t power_pin,int8_t current_voltage_pin,int8_t sel_pin) {
  return new ESP8266PowerClass(power_pin, current_voltage_pin, sel_pin);
}

ESP8266PowerClass *mgos_ESP8266PowerClass_begin() {
    return new ESP8266PowerClass();
}

// potential error area
/*void mgos_hlw8012_setMode(HLW8012 *hlw, char mode) {
  if (hlw == nullptr) return;
  hlw->setMode(mode);
} */

void mgos_ESP8266PowerClass_enableMeasurePower(ESP8266PowerClass *hlw) {
    if (hlw == nullptr) return;
    hlw->enableMeasurePower();
}

//Need to find out how to bring in the MEASURETYPE enum into this
/*void mgos_ESP8266PowerClass_selectMeasureCurrentOrVoltage(ESP8266PowerClass *hlw, char dev_type) {
     if (hlw == nullptr) return;
     hlw->selectMeasureCurrentOrVoltage(dev_type);
}*/

void mgos_ESP8266PowerClass_setPowerParam(ESP8266PowerClass *hlw, double param_a,double param_b) {
     if (hlw == nullptr) return;
     hlw->setPowerParam(param_a, param_b);
}

double mgos_ESP8266PowerClass_setCurrentParam(ESP8266PowerClass *hlw, double param_a,double param_b) {
     return (hlw == nullptr) ? -1 : hlw->setCurrentParam(param_a, param_b);
}

double mgos_ESP8266PowerClass_setVoltageParam(ESP8266PowerClass *hlw, double param_a,double param_b) {
     return (hlw == nullptr) ? -1 : hlw->setVoltageParam(param_a, param_b);
}

double mgos_ESP8266PowerClass_getPowerParam(ESP8266PowerClass *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getPowerParam();
}

double mgos_ESP8266PowerClass_getvoltageParam(ESP8266PowerClass *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getvoltageParam();
}

void mgos_ESP8266PowerClass_startMeasure(ESP8266PowerClass *hlw) {
  if (hlw == nullptr) return;
  hlw->startMeasure();
}

double mgos_ESP8266PowerClass_getPower(ESP8266PowerClass *hlw) {
  return (hlw == nullptr) ? -1 : hlw->getPower();
}

double mgos_ESP8266PowerClass_getCurrFrequency(ESP8266PowerClass *hlw) {
  return (hlw == nullptr) ? -1 : hlw->getCurrFrequency();
}


double mgos_ESP8266PowerClass_getVoltage((ESP8266PowerClass *hlw) {
  return (hlw == nullptr) ? -1 : hlw->getVoltage();
}



