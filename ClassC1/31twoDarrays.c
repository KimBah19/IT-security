#include <stdio.h>

int main()
{
     // 2D array = en array där varje element är en array i sig
    // Säg att vi vill ha:
    // 1 2 3
    // 4 5 6

    int numbers[2][3];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}