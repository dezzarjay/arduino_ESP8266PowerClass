//
// Created by DJ on 29/04/18.
//

#ifndef ARDUINO_HLW8012_H_MGOS_ARDUINO_HLW8012_C_H
#define ARDUINO_HLW8012_H_MGOS_ARDUINO_HLW8012_C_H

#include "power.h"

#ifdef __cplusplus
extern "C" {
#endif

ESP8266PowerClass *mgos_ESP8266PowerClass_create(int8_t power_pin,int8_t current_voltage_pin,int8_t sel_pin);

ESP8266PowerClass *mgos_ESP8266PowerClass_begin();

void mgos_ESP8266PowerClass_enableMeasurePower(ESP8266PowerClass *hlw);

void mgos_ESP8266PowerClass_selectMeasureCurrentOrVoltage(ESP8266PowerClass *hlw, char dev_type);

void mgos_ESP8266PowerClass_setPowerParam(ESP8266PowerClass *hlw, double param_a,double param_b);


void mgos_ESP8266PowerClass_setCurrentParam(ESP8266PowerClass *hlw, double param_a,double param_b);

void mgos_ESP8266PowerClass_setVoltageParam(ESP8266PowerClass *hlw, double param_a,double param_b);

double mgos_ESP8266PowerClass_getPowerParam(ESP8266PowerClass *hlw);

double mgos_ESP8266PowerClass_getCurrentParam(ESP8266PowerClass *hlw);

double mgos_ESP8266PowerClass_getvoltageParam(ESP8266PowerClass *hlw);

void mgos_ESP8266PowerClass_startMeasure(ESP8266PowerClass *hlw);

double mgos_ESP8266PowerClass_getPower(ESP8266PowerClass *hlw);

double mgos_ESP8266PowerClass_getCurrent(ESP8266PowerClass *hlw);

double mgos_ESP8266PowerClass_getVoltage(ESP8266PowerClass *hlw);

double mgos_ESP8266PowerClass_getCurrFrequency(ESP8266PowerClass *hlw);



#ifdef __cplusplus
}
#endif

#endif 
