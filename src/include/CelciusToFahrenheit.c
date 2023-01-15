#include <stdio.h>
#include "CelciusToFahrenheit.h"

void FToC()
{
    float InputF, Result;
    printf("Specify your input Fahrenheit\n");
    scanf("%f", &InputF);
    if (InputF < -459.4)
    {
        printf("-459.4 is the lowest temperature of Fahrenheit\n");
    }
    else
    {
        Result = (InputF - 32) / 1.8;
        printf("Result: %.1f degrees Celcius\n", Result);
    }
}

void CToF()
{
    float InputC, Result;
    printf("Specify your input Celcius\n");
    scanf("%f", &InputC);
    if (InputC < -273)
    {
        printf("-273 is the lowest temperature of Celcius\n");
    }
    else
    {
        Result = InputC * 1.8 + 32;
        printf("Result: %.1f degrees Fahrenheit\n", Result);
    }
}