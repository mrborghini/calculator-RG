#include <stdio.h>

void TableOf()
{
    int length, table, i, answer;
    printf("Which table would you like?\n");
    scanf("%d", &table);
    printf("How long do you want the table?\n");
    scanf("%d", &length);
    for (i = 0; i <= length; i++)
    {
    answer = table * i;
    printf("%d x %d = %d\n", table, i, answer);
    }
}