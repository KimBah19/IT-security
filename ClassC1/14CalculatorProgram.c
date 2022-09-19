#include <stdio.h>

int main()
{
    char operator;
    double number1;
    double number2;
    double result;

    printf("Ange ett räknesätt (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Ange två tal: ");
    scanf("%lf %lf", &number1, &number2);

    switch(operator)
    {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        default:
            printf("Felaktigt räknesätt");
    }
    printf("Resultatet är: %lf", result);
    return 0;
}