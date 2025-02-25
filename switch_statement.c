#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your mark (0-100): ");
    scanf("%d\n", &mark);
    if(mark > 100)
        printf("Mark out of range...");
    else
    {
        switch(mark)
        {
            case 90:
            case 100:
            {
                
                printf("Grade A");
                break;
            }
            case 80:
            case 70:
            {
                printf("Grade A");
                break;

            }
            default:
                printf("Input not valid");
        }
    }
    return 0;
}