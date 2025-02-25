#include <stdio.h>
#include <string.h>
struct Player
{
    char name[20];
    int score;
}player1, player2;  // structure variables can also be declared during its initialization

int main()
{
    // struct Player player1, player2;  

    strcpy(player1.name, "Bro");
    player1.score = 4;
    
    strcpy(player2.name, "Mulla");
    player2.score = 6;

    printf("%s has scored %d\n", player1.name, player1.score);
    printf("%s has scored %d\n", player2.name, player2.score);
    return 0;
}