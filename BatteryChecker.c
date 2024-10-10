#include <stdio.h>
#include "Param_Checker.h"
#include "WarningConfiguration.h"
#include "BatteryChecker.h"

#define TEMPERATURE_UPPER_LIMIT 45
#define TEMPERATURE_LOWER_LIMIT 0
#define SOC_UPPER_LIMIT 80
#define SOC_LOWER_LIMIT 20
#define CHARGE_RATE_UPPER_LIMIT 0.8
#define WARNING_TOLERANCE_PERCENTAGE 0.05
#define TEMPERATURE_WARNING_TOLERANCE (TEMPERATURE_UPPER_LIMIT * WARNING_TOLERANCE_PERCENTAGE)
#define SOC_WARNING_TOLERANCE (SOC_UPPER_LIMIT * WARNING_TOLERANCE_PERCENTAGE)
#define CHARGE_RATE_WARNING_TOLERANCE (CHARGE_RATE_UPPER_LIMIT * WARNING_TOLERANCE_PERCENTAGE)

int TemperatureIsOk(float temperature) {
    return IsWithinRange(temperature, TEMPERATURE_LOWER_LIMIT, TEMPERATURE_UPPER_LIMIT, TEMPERATURE_WARNING_TOLERANCE, "Temperature", warningConfiguration.temperatureWarningEnabled);
}

int SocIsOk(float soc) {
    return IsWithinRange(soc, SOC_LOWER_LIMIT, SOC_UPPER_LIMIT, SOC_WARNING_TOLERANCE, "Charge State", warningConfiguration.socWarningEnabled);
}

int ChargeRateIsOk(float chargeRate) {
    return CheckUpperLimit(chargeRate, CHARGE_RATE_UPPER_LIMIT, CHARGE_RATE_WARNING_TOLERANCE, "Charge Rate", warningConfiguration.chargeRateWarningEnabled);
}

int BatteryIsOk(float temperature, float soc, float chargeRate) {
    return TemperatureIsOk(temperature) && SocIsOk(soc) && ChargeRateIsOk(chargeRate);
}
