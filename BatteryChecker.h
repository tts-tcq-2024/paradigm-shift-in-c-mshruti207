#ifndef BATTERY_CHECKER_H
#define BATTERY_CHECKER_H

static int TemperatureIsOk(float temperature);
static int SocIsOk(float soc);
static int ChargeRateIsOk(float chargeRate);
static int BatteryIsOk(float temperature, float soc, float chargeRate);

#endif // BATTERY_CHECKER_H
