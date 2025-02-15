#include <stdio.h>
#include <stdlib.h>
int main()
{
    for(int i=0; i<10; i++)
    {
        int random = rand()%10+1;
        printf("%d\n", random);
    }
    return 0;
}