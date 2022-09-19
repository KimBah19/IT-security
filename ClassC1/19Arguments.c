#include <stdio.h>

void birthday(char name[], int age)
{
    printf("Grattis på födelsedagen %s!", name);
    printf("Du är nu %d år gammal!", age);
}

int main()
{
    char name[] = "MadeUpName";
    int age = 25;
    
    birthday(name, age);

    return 0;
}