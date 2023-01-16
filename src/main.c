#include <stdio.h>
#include "include/exit.h"
#include "include/Temperature.h"

int main(int argc, char const *argv[])
{
    char mode;
    printf("What mode would you like to use?\n");
    printf("More information in list.txt\n");
    scanf("%c", &mode);

    switch (mode)
    {
    case 'T':
        StartTemp();
        break;

    default:
        printf("Sorry %c is not available yet.\n", mode);
        printf("Please check if you're using capital letters for according text.txt %c \n", mode);
        break;
    }
    printf("Press Ctrl + C to exit\n");
    while (1){}
    
    return 0;
}
