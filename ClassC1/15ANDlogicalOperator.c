#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators = && (AND) kontrollerar om båda uttrycken är sanna

    float temperature = 21.5;

    if (temperature > 20 && temperature < 30)
    {
        printf("Temperaturen är bra");
    }
    else
    {
        printf("Temperaturen är inte bra");
    }
    return 0;
}