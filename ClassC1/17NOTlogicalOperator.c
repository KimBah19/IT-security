#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators = ! (NOT) kontrollerar om uttrycket är falskt

    bool sunny = false;

    if (!sunny)
    {
        printf("Det är inte soligt");
    }
    else
    {
        printf("Det är soligt");
    }

    return 0;
}