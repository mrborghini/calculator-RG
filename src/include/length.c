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

void IToCm()
{
    float inputI, result;
    printf("Specify your input Inches\n");
    scanf("%f", &inputI);
    result = inputI * 2.54;
    printf("Result: %.2f Centimeters\n", result);
}

void CmToI()
{
    float inputCm, result;
    printf("Specify your input Centimeters\n");
    scanf("%f", &inputCm);
    result = inputCm / 2.54;
    printf("Result: %.2f Inches\n", result);
}

void MToKm()
{
    float inputM, result;
    printf("Specify your input Miles\n");
    scanf("%f", &inputM);
    result = inputM * 1.609;
    printf("Result: %.2f Kilometers\n", result);
}

void KmToM()
{
    float inputKm, result;
    printf("Specify your input Kilometers\n");
    scanf("%f", &inputKm);
    result = inputKm / 1.609;
    printf("Result: %.2f Miles\n", result);
}

void startFeet()
{
    int unit;
    printf("What unit would you like to convert?\n");
    printf("0 for Feet to Meters\n");
    printf("1 for Meters to Feet\n");
    printf("2 for Inches to Centimeters\n");
    printf("3 for Centimeters to Inches\n");
    printf("4 for Miles to Kilometers\n");
    printf("5 for Kilometer to Miles\n");
    scanf("%d", &unit);
    switch (unit)
    {
    case 0:
        FToM();
        break;
    case 1:
        MToF();
        break;
    case 2:
        IToCm();
        break;
    case 3:
        CmToI();
        break;
    default:
        printf("Sorry %d is not an option\n", unit);
        break;
    }
}