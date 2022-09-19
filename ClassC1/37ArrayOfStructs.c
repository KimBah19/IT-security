#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    float gpa;
};

int main()
{
    struct student s1 = {"MadeUpName", 3.5};
    struct student s2 = {"MadeUpName2", 3.5};
    struct student s3 = {"MadeUpName3", 3.5};

    //printf("%s has a gpa of %f", s1.name, s1.gpa);

    struct student students[] = {s1, s2, s3};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%s\t", students[i].name);
        printf("%f\n", students[i].gpa);
    }

    return 0;
}