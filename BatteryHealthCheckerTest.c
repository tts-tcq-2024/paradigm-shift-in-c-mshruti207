#include <assert.h>
#include "BatteryChecker.h"
#include "BatteryHealthCheckerTest.h"

void TestBatteryHealthNormal() {
    assert(BatteryIsOk(25, 70, 0.7));
}

void TestBatteryHealthTemperature() {
    ASSERT_EQ(BatteryIsOk(50, 70, 0.7)); // Temperature too high
    ASSERT_EQ(BatteryIsOk(-1, 70, 0.7)); // Temperature too low
    ASSERT_EQ(BatteryIsOk(1, 70, 0.7)); // Temperature warning low
    ASSERT_EQ(BatteryIsOk(44, 70, 0.7)); // Temperature warning high
}

/*void TestBatteryHealthSoc() {
    ASSERT_EQ(BatteryIsOk(25, 85, 0.7)); // SOC too high
    ASSERT_EQ(BatteryIsOk(25, 15, 0.7)); // SOC too low
    ASSERT_EQ(BatteryIsOk(25, 21, 0.7)); // SOC warning low
    ASSERT_EQ(BatteryIsOk(25, 76, 0.7)); // SOC warning high
}

void TestBatteryHealthChargeRate() {
    ASSERT_EQ(BatteryIsOk(25, 70, 0.9)); // Charge rate too high
    ASSERT_EQ(BatteryIsOk(25, 70, 0.1)); // Charge rate normal
    ASSERT_EQ(BatteryIsOk(25, 70, 0.76)); // Charge rate warning high
}*/

void TestBatteryHealth() {
    TestBatteryHealthNormal();
    TestBatteryHealthTemperature();
    /*TestBatteryHealthSoc();
    TestBatteryHealthChargeRate();*/
}
