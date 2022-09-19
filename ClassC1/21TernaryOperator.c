#include <stdio.h>

int findMax(int x, int y)
{
    int max;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    return max;

    // return (x > y) ? x : y;
}

int main()
{
    // Ternary operator = en genväg för if-satser
    // (Condition) ? (True) : (False)

    int max = findMax(10, 20);

    printf("%d", max);

    return 0;
}