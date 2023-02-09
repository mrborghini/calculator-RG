#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/NormalMath.h"

void TableOf()
{
    int length, table, i;
    double answer;
    printf("Which table would you like?\n");
    scanf("%d", &table);
    printf("How long do you want the table?\n");
    scanf("%d", &length);
    for (i = 0; i <= length; i++)
    {
        answer = table * i;
        printf("%d x %d = %.0lf\n", table, i, answer);
    }
}

void Randomint()
{
    int min, max, num, answer, numbers;
    printf("What should be the minimal amount of the number?\n");
    scanf("%d", &min);
    printf("What should be the maximal amount of the number?\n");
    scanf("%d", &max);
    srand(time(0));
    num = (rand() % (max - min + 1)) + min;
    printf("Random number: %d\n", num);
}

void NormalMath()
{
    int i, num, o;
    double numbers[100], answer;
    char operator;

    printf("How many numbers would you like to input?\n");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%lf", &numbers[i]);
    }

    printf("Type an operator (+ - * / modulo)\n");
    scanf(" %c", &operator);

    answer = numbers[0];

    for (o = 1; o < num; o++)
    {
        switch (operator)
        {
        case '*':
            answer *= numbers[o];
            break;
        case '+':
            answer += numbers[o];
            break;
        case '-':
            answer -= numbers[o];
            break;
        case '/':
            answer /= numbers[o];
            break;
        default:
            printf("Sorry %c is not an option\n", operator);
            break;
        }
    }
    printf("Result = %.2lf\n", answer);
}