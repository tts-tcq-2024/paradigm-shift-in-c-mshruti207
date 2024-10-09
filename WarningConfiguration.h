#ifndef WARNING_CONFIGURATION_H
#define WARNING_CONFIGURATION_H

typedef struct {
    int temperatureWarningEnabled;
    int socWarningEnabled;
    int chargeRateWarningEnabled;
} WarningConfiguration;

extern WarningConfiguration warningConfiguration;

void EnableTemperatureWarning(int enable_disable);
void EnableSocWarning(int enable_disable);
void EnableChargeRateWarning(int enable_disable);

#endif // WARNING_CONFIGURATION_H
