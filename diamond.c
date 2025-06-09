#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows; j++)
        {
            if(i+j <= rows)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    for(int i=2; i<=rows; i++)
    {
        for(int k=1; k<=rows; k++)
        {
            if(k<=i-1)
                printf(" ");
            else    
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}