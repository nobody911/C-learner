#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
void playerMove();
void computerMove();
int checkFreespaces();
char checkWinner();
void printWinner(char);
char playAgain();

int main()
{
    char response;
    do
    {
        char winner = ' '; 
        resetBoard();
        while(winner == ' ' && checkFreespaces() <= 9)
        {
            printBoard();
            playerMove();
            computerMove();
            winner = checkWinner();
        }
        printBoard();
        printWinner(winner);

        printf("Do you want to play again (Y/N): ");
        scanf("%c");
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');
    printf("\nThanks for playing...😊");
    // response = playAgain();
    
    return 0;        
}

void resetBoard()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

void playerMove()
{
    int x, y;
    do
    {
        printf("Enter row (1-3): ");
        scanf("%d", &x);
        x--;
        printf("Enter column (1-3): ");
        scanf("%d", &y);
        y--;
        if(board[x][y] == ' ')
        {
            board[x][y] = PLAYER;
            break;
        }
        else
            printf("Invalid Move...\n");
    } while (board[x][y] != ' ');  
}

int checkFreespaces()
{
    int freespace = 9;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(board[i][j] == ' ')
                freespace --;
        }
    }
    return freespace;
}

char checkWinner()
{
    for(int i=0; i<3; i++)
    {
        // for rows
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
            return board[i][0];
        //for columns
        else if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return board[0][i];
        }
        //for diagonals
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
            return board[0][0];
        else if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
            return board[0][2];
        return ' ';
}
void computerMove()
{
    srand(time(0));
    int x, y;
    do
    {
        x = rand()%3;
        y = rand()%3;
        if(board[x][y] == ' ')
        {
            board[x][y] = COMPUTER;        
            break;
        }
    } while (board[x][y] != ' ');
    
}

void printWinner(char win)
{
    if(win == PLAYER)
        printf("\nYou Win...!!!😊\n");
    else if(win == COMPUTER)
        printf("\nYou Lose...!!!🥲\n");
    else
        printf("\nIt's a Tie...!!!🥲\n");        
}

/*char playAgain()
{
    char response;
    printf("\nDo you want to play again...?? (Y/N): ");
    scanf("%c");
    scanf("%c", &response);
    response = toupper(response);
    if(response == 'Y')
        return response;
    else if(response == 'N')
        printf("\nThanks for playing...😊");
    else
        printf("\nInvalid input...!!!");
}*/