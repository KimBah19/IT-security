#include <stdio.h>

int main()
{
    //format specifier % = definerar och formaterar hur ett värde ska skrivas ut

    // %c = char
    // %s = char array/string
    // %f = float
    // %lf = double
    // %d = bool, char as numeric value, short int as numeric value, int as numeric value, long long int as numeric value
    // %.1f = float med 1 decimal
    // %1 = minimum antal tecken som ska skrivas ut
    // %- = vänsterjusterad
    // %0 = fyller tomma tecken med 0

    float item1 = 5.75;
    float item2 = 10.50;
    float item3 = 100.99;

    printf("Item 1: %.1f\n", item1);
    printf("Item 2: %.1f\n", item2);
    printf("Item 3: %.1f\n", item3);

    return 0;
}