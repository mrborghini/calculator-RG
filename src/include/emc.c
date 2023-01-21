#include <stdio.h>
#include "emc.h"

void emc()
{
    float energy, mass, lightspeed = 299792458;
    printf("Specify your mass in Kg\n");
    scanf("%f", &mass);
    energy = mass * lightspeed * lightspeed;
    printf("Result energy: %2.f kg*(m/s)2\n", energy);
}