#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/NormalMath.h"

void TableOf()
{
    double table, answer;
    int length, i;
    printf("Which table would you like?\n");
    scanf("%lf", &table);
    printf("How long do you want the table?\n");
    scanf("%d", &length);
    for (i = 0; i <= length; i++)
    {
        answer = table * i;
        printf("%lf x %d = %lf\n", table, i, answer);
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

    printf("Type an operator (+ - * /)\n");
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
            if (numbers[o] == 0)
            {
                printf("Cannot devide by 0\n");
                exit(0);
            }

            answer /= numbers[o];
            break;
        default:
            printf("Sorry %c is not an option\n", operator);
            break;
        }
    }
    printf("Result = %lf\n", answer);
}

void factorial()
{
    float input, answer = 1;
    int i;
    printf("Which factorial would you like to know?\n");
    scanf("%f", &input);
    for (i = 1; i <= input; ++i)
    {
        answer *= i;
    }
    printf("Result = %f\n", answer);
}

void percentages()
{
    float value1, value2, answeramount, answerpercentage;
    printf("What is starting the original price?\n");
    scanf("%f", &value1);
    printf("What does it cost now?\n");
    scanf("%f", &value2);
    answeramount = value1 - value2;
    printf("The difference is: %f\n", answeramount);
    answerpercentage = answeramount / value1 * 100;
    printf("The percentage is: %f\n", answerpercentage);
}

void discount()
{
    float value1, value2, answer, difference;
    printf("What is the original price?\n");
    scanf("%f", &value1);
    printf("How much percent dicount do you have?\n");
    scanf("%f", &value2);
    difference = value1 / 100 * value2;
    answer = value1 - difference;
    printf("The difference is: %f\n", difference);
    printf("The full cost is: %f\n", answer);
}

void VAT()
{
    float price, percentageVAT;
    printf("What's the original price?\n");
    scanf("%f", &price);
    printf("How much percentage VAT do you have?\n");
    scanf("%f", &percentageVAT);
    printf("The difference is: %f\n", price / 100 * percentageVAT);
    printf("The full cost is: %f\n", (price / 100 * percentageVAT) + price);
}

void exponentiation()
{
    int i;
    float value1, value2, answer = 1;

    printf("Enter an number\n");
    scanf("%f", &value1);
    printf("To the power of\n");
    scanf("%f", &value2);
    if (value2 >= 0)
    {
        for (i = 0; i < value2; i++)
        {
            answer *= value1;
        }
    }
    else
    {
        for (i = 0; i > value2; i--)
        {
            answer /= value1;
        }
    }
    printf("Result: %f\n", answer);
}