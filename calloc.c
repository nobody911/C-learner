#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    printf("Enter the number of players: ");
    scanf("%d", &number);
    int *scores = calloc(number, sizeof(int));
    if(scores==NULL)
    {
        printf("\nMemory allocation failed!!!");
        return 1;
    }
    for(int i=0; i<number; i++)
    {
        printf("Enter the score of player %d: ", i+1);
        scanf("%d", &scores[i]);
    }
    for(int i=0; i<number; i++)
        printf("%d ", scores[i]);
    free(scores);
    scores = NULL;
    return 0;
}