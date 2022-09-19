#include <stdio.h>

int main()
{
    int age;
    printf("Hur gammal är du?");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Du är myndig");
    }
    else
    {
        printf("Du är inte myndig");
    }

    return 0;
}