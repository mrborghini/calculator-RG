#include <stdio.h>
#include "length.h"

void FToM()
{
    float inputF, result;
    printf("Specify your input Feet\n");
    scanf("%f", &inputF);
    result = inputF / 3.281;
    printf("Result: %.2f Meters\n", result);
}

void MToF()
{
    float inputM, result;
    printf("Specify your input Meters\n");
    scanf("%f", &inputM);
    result = inputM * 3.281;
    printf("Result: %.2f Feet\n", result);
}

void startFeet()
{
    int unit;
    printf("What unit would you like to convert?\n");
    printf("0 for Feet to Meters\n");
    printf("1 for Meters to Feet\n");
    scanf("%d", &unit);
    switch (unit)
    {
    case 0:
        FToM();
        break;
    case 1:
        MToF();
        break;
    default:
        printf("Sorry %d is not an option\n", unit);
        break;
    }
}