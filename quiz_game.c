#include <stdio.h>
#include <ctype.h>
void play_again();
int main()
{
    char questions[][100] = {"In which year C language was developed ?",
                            "Who is credit with the development of C ?",
                            "Which language is the predecessor of C ?"};
    char options[][100] = {"A. 1999", "B. 1919", "C. 1997", "D. 1972",
                            "A. Dennis Ritchie", "B. Walter White", "C. Ben Tennyson", "D. Goku",
                            "A. English", "B. C#", "C. C++", "D. Java"};
    char answer[]={'D', 'A', 'C'};
    int score=0;
    char guess;
    int question_size = sizeof(questions)/sizeof(questions[0]);
    for(int i=0; i<question_size; i++)                            
    {
        printf("%s\n", &questions[i]);
        for(int j=i*4; j<(i*4)+4; j++)
        {
            printf("%s\n", &options[j]);
        }
        printf("\nEnter your guess: ");
        scanf("%c", &guess);
        scanf("%c");
        guess = toupper(guess);
        if(answer[i]==guess)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong! The answer is %c\n", answer[i]);
        }
        printf("\n");
    }
    printf("Your score (%d/%d)\n", score, question_size);
    play_again();
    return 0;
}
void play_again()
{
    char replay;
    printf("Do you want to play again (Y/N): ");
    scanf("%c", &replay);
    replay = tolower(replay);
    if (replay=='y')
    {
        main();
    }
    else
    {
        printf("Thank you!! Have a nice day...😊");
    }
}