#include <stdio.h>

int main()
{
    // whie loop = repeterar ett block kod så länge ett villkor är sant	
    // do while loop = repeterar ett block kod minst en gång, oavsett om villkoret är sant eller inte

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    } while (number > 0);

    return 0;
}