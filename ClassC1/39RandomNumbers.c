#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pseudo random numbers = ett sätt att generera slumpmässiga tal

    srand(time(0)); // seedar rand() funktionen med systemets tid

    int number = (rand() % 6) + 1; // rand() % 6 ger ett tal mellan 0 och 5, + 1 ger ett tal mellan 1 och 6

    printf("%d", number);

    return 0;
}