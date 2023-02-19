#include <stdio.h>
#include <stdlib.h>
#include "../include/Temperature.h"
#include "../include/ohm.h"
#include "../include/ShowList.h"
#include "../include/length.h"
#include "../include/emc.h"
#include "../include/NormalMath.h"
#include "../include/Start.h"

void resetVariables()
{
    char mode = '\0';
    while (getchar() != '\n')
        ;
}

void Start()
{
    printf("Press Ctrl + C to quit anytime!\n");
    printf("Or type exit.\n");
    while (1)
    {
        char mode;
        printf("What mode would you like to use?\n");
        printf("Type L for more information\n");
        scanf("%c", &mode);

        switch (mode)
        {
        case 'L':
            ShowList();
            break;
        case 'T':
            StartTemp();
            break;
        case 'R':
            startOhm();
            break;
        case 'l':
            startFeet();
            break;
        case 'E':
            emc();
            break;
        case 'e':
            exit(0);
            break;
        case 't':
            TableOf();
            break;
        case 'r':
            Randomint();
            break;
        case 'm':
            NormalMath();
            break;
        case 'f':
            factorial();
            break;
        case 'p':
            percentages();
            break;
        case 'd':
            discount();
            break;
        case 'P':
            exponentiation();
            break;
        default:
            printf("Sorry %c is not available yet.\n", mode);
            printf("%c is not a valid option. For more information type L for a list of units\n", mode);
            break;
        }
        resetVariables();
    }
}