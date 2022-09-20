#include <stdio.h>

double square(double x)
{
    return x * x;
}

int main()
{
    // return statement avslutar en funktion
    // return 0; avslutar main-funktionen
    double x = square(5);
    printf("%lf", x);


    return 0;
}