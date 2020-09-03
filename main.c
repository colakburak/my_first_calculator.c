#include <stdio.h>
#include <stdlib.h>


int main()
{
    double num1;
    char opr;
    double num2;
    double result;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &opr); //!don't forget to put space before %c because when you give num1 a var and hit enter enter will be in opr car so carefull

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("%f %c %f = ",num1,opr,num2);

    if(opr == '+'){ //dont forget that char use only one bracet ''
        result = num1 + num2;
    } else if(opr == '-'){
        result = num1 - num2;
    } else if (opr == '/'){
        result = num1 / num2;
    } else if (opr == '*'){
        result = num1 * num2;
    } else {
        printf("Operator is not correct! Try again!");
    }
    printf("%f", result);



    return 0;
}
