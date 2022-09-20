#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators = || (OR) kontrollerar om något av uttrycken är sant

    float temperature = 21.5;

    if (temperature < 20 || temperature > 30)
    {
        printf("Temperaturen är inte bra");
    }
    else
    {
        printf("Temperaturen är bra");
    }
    return 0;
}