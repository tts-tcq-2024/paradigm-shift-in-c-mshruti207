#include <stdio.h>
#include "BatteryChecker.h"
#include <assert.h>
int main() {
    assert(BatteryIsOk(25, 70, 0.7));   // All parameters in range
    assert(BatteryIsOk(50, 85, 0.7));  // Temperature and SoC out of range
    assert(BatteryIsOk(2, 22, 0.1));    // Values approaching lower range limit
    assert(BatteryIsOk(44, 79, 0.79));  // Values approaching upper range limit
    assert(BatteryIsOk(-1, 19, 0.81)); // All parameters out of range

    printf("All test cases passed!\n");
    return 0;
}
