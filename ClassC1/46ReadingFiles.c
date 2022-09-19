#include <stdio.h>

int main()
{
    // reading files
    FILE *pF = fopen("test.txt", "r");

    char line[255];
    while (fgets(line, 255, pF) != NULL)
    {
        printf("%s", line);
    }

    fclose(pF);

    return 0;
}