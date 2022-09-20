#include <stdio.h>

int main()
{
    // pointer = en variabel som lagrar en adress till en annan variabel
    // Nyttjar * för att peka på en variabels adress

    int age = 25;
    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of pAge: %d\n", pAge);

    printf("value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge); // * = dereference operator

    return 0;
}