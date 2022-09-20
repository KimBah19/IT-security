#include <stdio.h>

void hello(char[], int); //function prototype

int main()
{
    // function prototypes = funktioner som inte har någon kod och som bara deklarerar funktionen
    char name[] = "MadeUpName";
    int age = 25;

    hello(name, age);

    return 0;

}

void hello(char name[], int age)
{
    printf("Hello %s, you are %d years old", name, age);
}