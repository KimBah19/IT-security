#include <stdio.h>

int main()
{
    // Constant = En variabel vars värde inte kan ändras / är konstant
    // const float pi = 3.141592;
    float pi = 3.141592; 

    pi = 3.14; //Detta är tillåtet utan const

    printf("%f\n", pi);

    return 0;
}