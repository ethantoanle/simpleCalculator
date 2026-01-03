#include <stdio.h>
#include "cal.h"

char getOperator(void)
{
    char op;
    int valid;

    do {
        printf("Enter an operator: ");
        scanf(" %c", &op);

        valid = op != '+' && op != '-' && op != '*' && op != '/';

        if (valid) {
            printf("Error! Operator is not correct\n");
        }
    } while (valid);

    return op;
}

double getNumber(void)
{
    double num;
    int valid;

    do {
        printf ("Enter a number: ");
        valid = scanf("%lf", &num);
    
        if (valid != 1) {
            printf("Error! It is NOT a number\n");

            clearBuffer();
        }

    } while(!valid);

    return num;
}

void clearBuffer(void)
{
    while (getchar() != '\n') {
        ;
    }
}