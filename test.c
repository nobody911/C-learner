#include <stdio.h>
int main()
{
    int j=1;
    for(int i=1; i<=10; i++)
    {
        for(; j<=i*10; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}