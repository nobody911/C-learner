#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows; j++)
        {
            if(i==1 || i==rows)
                printf("*");
            else
            {
                if(j==1)
                    printf("*");
                else if(j==rows)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}