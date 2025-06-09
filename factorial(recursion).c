#include <stdio.h>
int fact(int n)
{
    static int num=1;
    num *= n;
    n -= 1;
    if(n)
        fact(n);
    return num;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The factorial of %d is: %d", n, fact(n));
    return 0;
}