#include <stdio.h>

int main()
{
    //augmented assignment operators = Används för att ersätta en operator där en variabel används tillsammans med en operator och ett värde
    // Exempelvis x = x + 1 kan ersättas med x += 1

    int x = 10;

    //x = x + 4; //x = 14
    x+=4; //x = 14

    printf("%d", x);
    return 0;
}