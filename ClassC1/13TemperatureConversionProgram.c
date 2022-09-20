#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temperature;

    printf("Är tempetenheten Celsius eller Fahrenheit? (C/F): ");
    scanf("%c", &unit);

    if (toupper(unit) == 'C')
    {
        printf("Ange temperaturen i Celsius: ");
        scanf("%f", &temperature);

        printf("Temperaturen i Fahrenheit är: %f", temperature * 9 / 5 + 32);
    }
    else if (toupper(unit) == 'F')
    {
        printf("Ange temperaturen i Fahrenheit: ");
        scanf("%f", &temperature);

        printf("Temperaturen i Celsius är: %f", (temperature - 32) * 5 / 9);
    }
    else
    {
        printf("Felaktig enhet");
    }
    return 0;
}