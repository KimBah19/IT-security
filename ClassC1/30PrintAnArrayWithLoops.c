#include <stdio.h>

int main()
{
    double numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%lf\n", numbers[i]);
    }

    return 0;
}