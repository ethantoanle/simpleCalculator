#include <stdio.h>
#include "cal.h"

int main(void)
{
    char opr;
    double num1, num2, result;

    num1 = getNumber();
    opr = getOperator();
    num2 = getNumber();
    
    if (opr == '+'){
        result = num1 + num2;
    }
    else if (opr == '-'){
        result = num1 - num2;
    }
    else if (opr == '*'){
        result = num1 * num2;
    }
    else if (opr == '/'){
        result = num1 / num2;
    }

    printf("Result: %.2lf\n\n", result);

}
