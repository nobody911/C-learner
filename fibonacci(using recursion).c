#include <stdio.h>
void fib(int n, int first, int second)
{
    printf("%d ", first);
    int next = first+second;
    n-=1;
    if(n)
    {
        fib(n, second, next);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    fib(n, 0, 1);
    return 0;
}