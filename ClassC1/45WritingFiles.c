#include <stdio.h>

int main()
{
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "\nHello World!");

    fclose(pF);

    return 0;
}