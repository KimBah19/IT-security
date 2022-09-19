#include <stdio.h>

int main()
{
    // En variabel = En plats i minnet som kan innehålla ett värde
    // Vi refererar till variabeln med ett namn som lagrar värdet
    // Variabeln kan ha olika typer och kräver därför deklaration samt initialisering
    // Deklaration = Att ange vilken typ variabeln är
    // Initialisering = Att tilldela ett värde till variabeln

    int x; // Deklaration av variabeln x av typen int
    x = 5; // Tilldelning av värdet 5 till variabeln x
    int y = 10; // Deklaration och initialisering av variabeln y av typen int

    int age = 21; //Typen integer
    float gpa = 3.5; //Typen float
    char grade = 'A'; //Typen char
    char name[] = "Ludwig"; //Typen char array

    printf("Hello %s, you are %d years old and have a gpa of %f and a grade of %c", name, age, gpa, grade);

    return 0;
}