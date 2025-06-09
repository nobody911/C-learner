#include <stdio.h>
int gcd(int n1, int n2) // using recursion
{
    if(n2==0)
        return n1;
    else
        gcd(n2, n1%n2);
}
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("\n The GCD of %d and %d is: %d", num1 , num2, gcd(num1, num2));
    return 0;
}