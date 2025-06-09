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
            if(j+i<=rows)
                printf(" ");
        }
        for(int k=1; k<=rows; k++)
        {
            if(i==1 || i==rows)
                printf("*");
            else
            {
                if(k==1 || k==rows)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}