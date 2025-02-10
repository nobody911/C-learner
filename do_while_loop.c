#include <stdio.h>
int main()
{
    int number=0, sum=0;
    char is_running;
        do 
        {
            printf("\nEnter a number to sum (e to exit): ");
            scanf("%d", &number);
            sum += number;
        }
        while (number > 0);
    printf("The sum is: %d", sum);
    return 0;
}