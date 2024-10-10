#include <stdio.h>


int main() {
    assert(batteryIsOk(25, 70, 0.7));   // All parameters in range
    assert(!batteryIsOk(50, 85, 0.7));  // Temperature and SoC out of range
    assert(batteryIsOk(2, 22, 0.1));    // Values approaching lower range limit
    assert(batteryIsOk(44, 79, 0.79));  // Values approaching upper range limit
    assert(!batteryIsOk(-1, 19, 0.81)); // All parameters out of range

    printf("All test cases passed!\n");
    return 0;
}
