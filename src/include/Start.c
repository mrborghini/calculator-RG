#include <stdio.h>
#include "exit.h"
#include "Temperature.h"
#include "ohm.h"
#include "ShowList.h"

void Start()
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
    default:
        printf("Sorry %c is not available yet.\n", mode);
        printf("Please check if you're using capital letters for according to the list %c \n", mode);
        break;
    }
    printf("Press Ctrl + C to exit\n");
    while (1){}
}