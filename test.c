#include <stdio.h>
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(j<=4-i)
                printf(" ");
            }
            for(int k=1; k<=4; k++)
                printf("*");
        printf("\n");
    }
return 0;
}