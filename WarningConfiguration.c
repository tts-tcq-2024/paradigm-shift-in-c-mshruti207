#include "WarningConfiguration.h"
WarningConfiguration warningConfiguration = {enabled, enabled, enabled};
 
void EnableTemperatureWarning(int enabled) {
    warningConfiguration.temperatureWarningEnabled = enabled;
}

void EnableSocWarning(int enabled) {
    warningConfiguration.socWarningEnabled = enabled;
}

void EnableChargeRateWarning(int enabled) {
    warningConfiguration.chargeRateWarningEnabled = enabled;
}

