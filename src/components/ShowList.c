#include <stdio.h>
#include "../include/ShowList.h"

void ShowList()
{
    int i;
    char list[][30] = {
        "T for Temperature",
        "R for Resistance",
        "l for length",
        "E for Mass Energy equivalence",
        "t for table of",
        "r for random number",
        "m for normal math",
        "f for factorial",
        "p for percentages",
        "d for discount",
        "V for VAT",
        "P for power (exponentiation)"};
    int length = sizeof(list) / sizeof(list[0]);
    for (i = 0; i < length; i++)
    {
        printf("%s\n", list[i]);
    }
}