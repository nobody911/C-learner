#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MAX=100, MIN=1;
    int answer, guess, guesses=0;
    srand(time(0));
    answer = (rand()%MAX) + MIN;
    do 
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("Guess too high!\n");
        }
        else if(guess < answer)
        {
            printf("Guess too low!\n");
        }
        else
        {
            printf("Correct!...😊\n");
        }
        guesses++;
    }while(guess != answer);
    printf("The answer is: %d\n", answer);
    printf("You took %d guesses\n", guesses);
    return 0;
}