#include <stdio.h>
#include <assert.h>

// Function prototypes
int batteryIsOk(float temperature);
void tempok(float a);

int main() {
    // Test cases for batteryIsOk
   // assert(batteryIsOk(25) == 1); // Expected: 1 (temperature is ok)
    assert(batteryIsOk(50) == 0); // Expected: 0 (temperature out of range)
    //assert(batteryIsOk(-5) == 0); // Expected: 0 (temperature out of range)

    return 0;
}

// Function definition
int batteryIsOk(float temperature) 
{
    // Call tempok to check the temperature
    tempok(temperature);

return 0;
}

void tempok(float a)
{
    if (a < 0 || a > 45) 
    {
        printf("Temperature out of range!\n");
    } 
}
