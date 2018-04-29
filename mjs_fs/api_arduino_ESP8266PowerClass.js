let HLW8012 = {

    _create: ffi('void *mgos_ESP8266PowerClass_create(int8_t,int8_t,int8_t)'),
    _begin: ffi('void *mgos_ESP8266PowerClass_begin()'),
    _enableMeasurePower: ffi('void mgos_ESP8266PowerClass_enableMeasurePower(void *)'),
    _selectMeasureCurrentOrVoltage: ffi('void mgos_ESP8266PowerClass_selectMeasureCurrentOrVoltage(void *, char *)'),
    _setPowerParam: ffi('void mgos_ESP8266PowerClass_setPowerParam(void *, double, double)'),
    _setCurrentParam: ffi('void mgos_ESP8266PowerClass_setCurrentParam(void *, double, double)'),
    _setVoltageParam: ffi('void mgos_ESP8266PowerClass_setVoltageParam(void *, double, double*)'),
    _getPowerParam: ffi('double mgos_ESP8266PowerClass_getPowerParam (void *)'),
    _getCurrentParam: ffi('double mgos_ESP8266PowerClass_getCurrentParam (void *)'),
    _getvoltageParam: ffi('dobule mgos_ESP8266PowerClass_getvoltageParam(void *)'),
    _startMeasure: ffi('void mgos_ESP8266PowerClass_startMeasure (void *)'),
    _getPower: ffi('dobule mgos_ESP8266PowerClass_getPower(void *)'),
    _getCurrent: ffi('double mgos_ESP8266PowerClass_getCurrent (void *)'),
    _getVoltage: ffi('double mgos_ESP8266PowerClass_getVoltage (void *)'),
    _getCurrFrequency: ffi('dobule mgos_ESP8266PowerClass_getCurrFrequency(void *)'),

    _proto: {

        // Public functions



        // ## **`myHTU.readTemperature()`**
        // Read the current temperature.
        // Return value: current temperature value in Celsius as a double.
        enableMeasurePower: function () {
            return ESP8266PowerClass._enableMeasurePower(this.hlw);
        },

        // ## **`myHTU.readHumidity()`**
        // Read the current relative humidity as a percentage.
        // Return value: current humidity value as a double.
        selectMeasureCurrentOrVoltage: function (dev_type) {
            return ESP8266PowerClass._selectMeasureCurrentOrVoltage(this.hlw, dev_type);
        },

        setPowerParam: function (param_a, param_b) {
            return ESP8266PowerClass._setPowerParam(this.hlw, param_a, param_b);
        },

        setCurrentParam: function (param_a, param_b) {
            return ESP8266PowerClass._setCurrentParam(this.hlw, param_a, param_b);
        },

        setVoltageParam: function (param_a, param_b) {
            return ESP8266PowerClass._setVoltageParam(this.hlw, param_a, param_b);
        },

        getPowerParam: function () {
            return ESP8266PowerClass._getPowerParam(this.hlw);
        },

        getCurrentParam: function () {
            return ESP8266PowerClass._getCurrentParam(this.hlw);
        },

        getvoltageParam: function () {
            return ESP8266PowerClass._getvoltageParam(this.hlw);
        },

        startMeasure: function () {
            return ESP8266PowerClass._startMeasure(this.hlw);
        },

        getPower: function () {
            return ESP8266PowerClass._getPower(this.hlw);
        },

        getCurrent: function () {
            return ESP8266PowerClass._getCurrent(this.hlw);
        },

        getVoltage: function () {
            return ESP8266PowerClass._getVoltage(this.hlw);
        },

        getCurrFrequency: function () {
            return ESP8266PowerClass._getCurrFrequency(this.hlw);
        },

    },

    // ## **`Adafruit_HTU21DF.create()`**
    // Create an Adafruit_HTU21DF instance on I2C bus (address = 0x40).
    // Return value: an object with the methods defined in _proto: {...} (above).
    create: function (power_pin, current_voltage_pin, sel_pin ) {
        let obj = Object.create(ESP8266PowerClass._proto);
        // set default parameter values
        // Initialize Adafruit_HTU21DF library.
        // Return value: handle opaque pointer.
        obj.hlw = ESP8266PowerClass._create();
        return obj;
    }

    begin: function () {
        let obj = Object.begin(ESP8266PowerClass._proto);
        // set default parameter values
        // Initialize Adafruit_HTU21DF library.
        // Return value: handle opaque pointer.
        obj.hlw = ESP8266PowerClass._begin();
        return obj;
    }

};
