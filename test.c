#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    printf("The quotient of %d and %d is : %d", num, 10, num/10);
    printf("\nThe remainder of %d and %d is: %d", num, 10, num%10);
    return 0;
}
