#include <stdio.h>
#include "exit.h"
#include "Temperature.h"
#include "ohm.h"
#include "ShowList.h"
#include "length.h"

void resetVariables()
{
    char mode = '\0';
    while (getchar() != '\n')
        ;
}

void Start()
{
    printf("Press Ctrl + C to quit anytime!\n");
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
        default:
            printf("Sorry %c is not available yet.\n", mode);
            printf("%c is not a valid option. For more information type L for a list of units\n", mode);
            break;
        }
        resetVariables();
    }
}