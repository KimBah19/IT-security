#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Volvo", "BMW", "Ford", "Mazda"};

    strcpy(cars[0], "Opel");

    for(int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    return 0;
}