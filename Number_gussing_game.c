//NUMBER GUSSING GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to number gussing game!!!!\n");

    do
    {
        printf("Enter your guess : ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber)
        {
            printf("Try gussing a higher number\n");
        }
        else if (guess > randomNumber)
        {
            printf("Try gussing a lower number\n");
        }
        else
        {
            printf("Conguralation!!!!!\n");
        }
    } while (guess != randomNumber);

    printf("You gussed in %d attempts.", attempts);
}

