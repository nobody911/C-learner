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
            if(j<=i-1)
            printf(" ");
        }
        for(int k=1; k<=rows; k++)
        printf("*");
        printf("\n");
    }
    /*for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows; j++)
        {
            if(j<=rows-i)
                printf(" ");
        }
        for(int k=1; k<=rows; k++)
            printf("*");
        printf("\n");
    }*/
}