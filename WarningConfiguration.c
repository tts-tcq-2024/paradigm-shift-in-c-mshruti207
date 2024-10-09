#include "WarningConfiguration.h"

//WarningConfiguration warningConfiguration = {1, 1, 1}; // Enable all warnings by default

void EnableTemperatureWarning(int enable_disable) {
    warningConfiguration.temperatureWarningEnabled = enable_disable;  //Set 0 to Disbale warning and 1 to Enable Warning
}

void EnableSocWarning(int enable_disable) {
    warningConfiguration.socWarningEnabled = enable_disable;
}

void EnableChargeRateWarning(int config) {
    warningConfiguration.chargeRateWarningEnabled = enable_disable;
}
