#include <stdio.h>
#include <string.h>

int main()
{
    // struct = en samling av variabler
    struct Person
    {
        char name[50];
        int age;
        float salary;
    };

    struct Person p1;
    strcpy(p1.name, "Kalle");
    p1.age = 30;
    p1.salary = 10000;

    printf("%s is %d years old and earns %f per month", p1.name, p1.age, p1.salary);

    return 0;
}