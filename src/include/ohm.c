#include <stdio.h>
#include "ohm.h"

void resistance()
{
    float inputU, inputI, result;
    printf("Specify your volts\n");
    scanf("%f", &inputU);
    printf("Specify your amps\n");
    scanf("%f", &inputI);
    result = inputU / inputI;
    printf("Result = %.2f Ohm\n", result);
}

void voltage()
{
    float inputR, inputI, result;
    printf("Specify resistance in Ohm\n");
    scanf("%f", &inputR);
    printf("Specify your amps\n");
    scanf("%f", &inputI);
    result = inputR * inputI;
    printf("Result = %.2f Volts\n", result);
}

void Ecurrent()
{
    float inputU, inputR, result;
    printf("Specify your volts\n");
    scanf("%f", &inputU);
    printf("Specify resistance in Ohm\n");
    scanf("%f", &inputR);
    result = inputU / inputR;
    printf("Result = %.2f Amps\n", result);
}

void startOhm()
{
    int unit;
    printf("What unit would you like to convert?\n");
    printf("0 for voltage and amps to Ohm\n");
    printf("1 for Ohm and amps to voltage\n");
    printf("2 for voltage and Ohm to amps\n");
    scanf("%d", &unit);

    switch (unit)
    {
    case 0:
        resistance();
        break;
    case 1:
        voltage();
        break;
    case 2:
        Ecurrent();
        break;
    default:
        printf("Sorry %d is not an option\n", unit);
        break;
    }
}