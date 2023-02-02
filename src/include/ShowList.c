#include <stdio.h>

void ShowList(){
    int i;
    char list[][30] = {"T for Temperature", "R for Resistance", "l for length", "E for Mass Energy equivalence", "t for table of", "r for random number"};
    int length = sizeof(list)/sizeof(list[0]);
    for (i = 0; i < length; i++)
    {
    printf("%s\n", list[i]);
    }
}