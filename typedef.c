#include <stdio.h>
typedef struct
{
    char name[20];
    int score;
}Player;
int main()
{
    Player player1 = {"Bro", 5};
    Player player2 = {"Bruh", 6};
    printf("%s has scored %d\n", player1.name, player1.score);
    printf("%s has scored %d", player2.name, player2.score);
    return 0;
}