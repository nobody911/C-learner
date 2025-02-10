#include <stdio.h>
int main()
{
    int num = 1;
    while(num <= 10)
    {
        if(num==7)
        {
            num++;
            // continue;
            break;
        }
        else
        {
            printf("%d\n", num);
            num++;
        }
    }
    return 0;
}