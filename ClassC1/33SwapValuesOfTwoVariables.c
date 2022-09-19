#include <stdio.h>
#include <string.h>

int main()
{
    // swap values of two variables
    char x = 'X';
    char y = 'Y';
    char temp;
    temp = x;
    x = y;
    y = temp;

    printf("x = %c, y = %c", x, y);

    return 0;
}