#include <stdio.h>
#include <assert.h>

// Function declarations
int tempisok(float temp);
int socisok(float soc);
int chrgRteisok(float chrgRte);

int batteryIsOk(float temperature, float soc, float chargeRate) 
{
    return tempisok(temperature) && socisok(soc) && chrgRteisok(chargeRate);
}

int tempisok(float temp)
{
    if (temp < 0 || temp > 45) 
    {
        printf("Temperature out of range!\n");
        return 0; 
    }
    return 1;
}

int socisok(float soc)
{
    if (soc < 20 || soc > 80) 
    {
        printf("State of Charge out of range!\n");
        return 0; 
    }
    return 1; 
}

int chrgRteisok(float chrgRte)
{
    if (chrgRte > 0.8) 
    {
        printf("Charge Rate out of range!\n");
        return 0; 
    }
    return 1;
}

int main() {
    assert(batteryIsOk(25, 70, 0.7)); 
    assert(!batteryIsOk(50, 85, 0)); 
}
 
