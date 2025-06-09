#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            printf("%d is not a prime number", num);
            break;
        }
        else if (i == num-1)
        {            
            printf("%d is a prime number", num);
        }        
    }
    return 0;
}