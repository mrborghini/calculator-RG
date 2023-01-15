#include <stdio.h>
#include "Temperature.h"
#include "exit.h"

void FToC()
{
    float InputF, Result;
    printf("Specify your input Fahrenheit\n");
    scanf("%f", &InputF);
    if (InputF < -459.67)
    {
        printf("-459.67 is the lowest temperature of Fahrenheit\n");
        exit(0);
    }
    else
    {
        Result = (InputF - 32) / 1.8;
        printf("Result: %.2f degrees Celcius\n", Result);
    }
}

void CToF()
{
    float InputC, Result;
    printf("Specify your input Celcius\n");
    scanf("%f", &InputC);
    if (InputC < -273.15)
    {
        printf("-273.15 is the lowest temperature of Celcius\n");
        exit(0);
    }
    else
    {
        Result = InputC * 1.8 + 32;
        printf("Result: %.2f degrees Fahrenheit\n", Result);
    }
}

void KToC()
{
    float InputK, Result;
    printf("Specify your input Kelvin\n");
    scanf("%f", &InputK);
    if (InputK < 0)
    {
        printf("0 is the lowest temperature of Kelvin\n");
        exit(0);
    }
    else
    {
        Result = InputK + 273.15;
        printf("Result: %.2f degrees Celcius\n", Result);
    }
}

void CToK()
{
    float InputC, Result;
    printf("Specify your input Celcius\n");
    scanf("%f", &InputC);
    if (InputC < 0)
    {
        printf("-273.15 is the lowest temperature of Celcius\n");
        exit(0);
    }
    else
    {
        Result = InputC - 273.15;
        printf("Result: %.2f degrees Kelvin\n", Result);
    }
}

void FToK()
{
    float InputF, Result;
    printf("Specify your input Fahrenheit\n");
    scanf("%f", &InputF);
    if (InputF < 0)
    {
        printf("0 is the lowest temperature of Kelvin\n");
        exit(0);
    }
    else
    {
        Result = (InputF - 32) * 5 / 9 + 273.15;
        printf("Result: %.2f degrees Kelvin\n", Result);
    }
}

void KToF()
{
    float InputK, Result;
    printf("Specify your input Kelvin\n");
    scanf("%f", &InputK);
    if (InputK < 0)
    {
        printf("0 is the lowest temperature of Kelvin\n");
        exit(0);
    }
    else
    {
        Result = (InputK - 273.15) * 1.8 + 32;
        printf("Result: %.2f degrees Fahrenheit\n", Result);
    }
}

void StartTemp()
{
    int unit;
    printf("What unit would you like to convert?\n");
    printf("0 for Fahrenheit to Celcius\n");
    printf("1 for Celcius to Fahrenheit\n");
    printf("2 for Kelvin to Celcius\n");
    printf("3 for Celcius to Kelvin\n");
    printf("4 for Fahrenheit to Kelvin\n");
    printf("5 for Kelvin to Fahrenheit\n");
    scanf("%d", &unit);
    switch (unit)
    {
    case 0:
        FToC();
        break;
    case 1:
        CToF();
        break;
    case 2:
        KToC();
        break;
    case 3:
        CToK();
        break;
    case 4:
        FToK();
        break;
    case 5:
        KToF();
        break;
    default:
        printf("Sorry %d is not an option", unit);
    }
}