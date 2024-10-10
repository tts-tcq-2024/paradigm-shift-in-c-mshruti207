#ifndef BATTERY_CHECKER_H
#define BATTERY_CHECKER_H

int TemperatureIsOk(float temperature);
int SocIsOk(float soc);
int ChargeRateIsOk(float chargeRate);
int BatteryIsOk(float temperature, float soc, float chargeRate);

#endif // BATTERY_CHECKER_H
