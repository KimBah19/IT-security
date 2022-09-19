#include <stdio.h>

int main()
{
    // nested loops = loopar inuti loopar

    int rows;
    int columns;
    char symbol;

    printf("Hur många rader vill du ha?");
    scanf("%d", &rows);

    printf("Hur många kolumner vill du ha?");
    scanf("%d", &columns);

    printf("Vilket tecken vill du använda?");
    scanf(" %c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}