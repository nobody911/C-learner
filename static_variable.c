#include <stdio.h>
int main()
{
    static int a = 12;
    a = 20;
    printf("%d", a);
    return 0;
}