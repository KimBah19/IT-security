#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // guess the number game

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    // seeda rand() funktionen med systemets tid
    srand(time(0));

    // slumpa fram ett tal mellan 1 och 100
    answer = (rand() % MAX) + MIN;

    //printf("%d\n", answer); //för att få fram svaret
    //eller för att gamifya det lite

    do{
        printf("Guess a number between %d and %d: ", MIN, MAX);
        scanf("%d", &guess);
        guesses++;

        if(guess > answer)
        {
            printf("Too high!\n");
        }
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Correct! You guessed %d times\n", guesses);
        }
    } while (guess != answer);

    return 0;
}