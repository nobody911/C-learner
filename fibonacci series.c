#include <stdio.h>
int main()
{
    int first=0, second=1, next=first+second, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i=n; i>0; i--)
    {
        printf("%d ", first);
        first = second;
        second = next;
        next = first+second;
    }
    return 0;
}