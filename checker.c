#include <stdio.h>
#include <assert.h>

// Function prototypes
int batteryIsOk(float temperature);
void tempok(float a);

int main() {
    // Test cases for batteryIsOk
    assert(batteryIsOk(25) == 1); // Expected: 1 (temperature is ok)
    assert(batteryIsOk(50) == 0); // Expected: 0 (temperature out of range)


    return 0;
}

// Function definition
int batteryIsOk(float temperature) 
{
    // Call tempok to check the temperature
    tempok(temperature);

    // Return 1 if temperature is within range, otherwise return 0
    if (temperature < 0 || temperature > 45) 
    {
        return 0; // Temperature is out of range
    } 
    return 1; // Temperature is within range
}

void tempok(float a)
{
    if (a < 0 || a > 45) 
    {
        printf("Temperature out of range!\n");
    } 
}
