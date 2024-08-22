#include <stdio.h>
#include <assert.h>
void tempok(float temp);
void socok(float soc);
void chrgRteok(float chrgRte);
int batteryIsOk(float temperature, float soc, float chargeRate) 
{
    tempok(temperature);
    socok(soc);
    chrgRteok(chargeRate);
    return 0;
}

void tempok(float temp)
{
    if (temp < 0 || temp > 45) 
    {
        printf("Temperature out of range!\n");
    } 
}

void socok(float soc)
{
if(soc < 20 || soc > 80) 
{
    printf("State of Charge out of range!\n");
}
}
  
void chrgRteok(float chrgRte)
{
    if(chrgRte > 0.8) 
    {
    printf("Charge Rate out of range!\n");
}
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
        printf("Temperature out of range!\n");
    } 
}
