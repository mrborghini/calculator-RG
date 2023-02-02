#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void Randomint()
{
    int min, max, num;
    printf("What should be the minimal amount of the number?\n");
    scanf("%d", &min);
    printf("What should be the maximal amount of the number?\n");
    scanf("%d", &max);
    srand(time(0));
    num = (rand() % (max - min + 1)) + min;
    printf("Random number: %d\n", num);
}