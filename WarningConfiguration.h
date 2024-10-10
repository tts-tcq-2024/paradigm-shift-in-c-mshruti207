#ifndef WARNING_CONFIGURATION_H
#define WARNING_CONFIGURATION_H

typedef struct {
    int temperatureWarningEnabled;
    int socWarningEnabled;
    int chargeRateWarningEnabled;
} WarningConfiguration;

extern WarningConfiguration warningConfiguration;


#endif // WARNING_CONFIGURATION_H
