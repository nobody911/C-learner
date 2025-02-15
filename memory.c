#include <stdio.h>
int main()
{
    char a='A', b='B';
    int c='C';
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    printf("Bytes of a: %d\n", sizeof(a));
    printf("Bytes of b: %d\n", sizeof(b));
    printf("Bytes of c: %d\n", sizeof(c));

    return 0;
}