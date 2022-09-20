#include <stdio.h>
#include <math.h>

int main()
{
    double side1;
    double side2;
    double hypotenuse;

    printf("Ange sidan 1: ");
    scanf("%lf", &side1);

    printf("Ange sidan 2: ");
    scanf("%lf", &side2);

    hypotenuse = sqrt(side1 * side1 + side2 * side2);

    printf("Hypotenusan är: %lf", hypotenuse);

    return 0;
}