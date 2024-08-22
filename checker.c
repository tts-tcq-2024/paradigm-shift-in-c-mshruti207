#include <stdio.h>
#include <assert.h>

// Pure function: checks if battery parameters are within acceptable ranges
int batteryIsOk(float temperature, float soc, float chargeRate) {
    if (temperature < 0 || temperature > 45) {
        return 0; // Temperature out of range
    }
    if (soc < 20 || soc > 80) {
        return 0; // State of Charge out of range
    }
    if (chargeRate > 0.8) {
        return 0; // Charge Rate out of range
    }
    return 1; // All parameters are within range
}

int main() {
    int result;

    result = batteryIsOk(25, 70, 0.7);
    assert(result == 1); // Expecting 1 (True) since parameters are within range

    result = batteryIsOk(50, 85, 0);
    assert(result == 0); // Expecting 0 (False) due to temperature and SOC out of range

    if (!batteryIsOk(25, 70, 0.7)) {
        printf("Test failed: Expected parameters to be within range.\n");
    }

    if (batteryIsOk(50, 85, 0) || batteryIsOk(25, 70, 0.9)) {
        printf("Test failed: Expected parameters to be out of range.\n");
    }

    printf("All tests passed!\n");
    return 0;
}
