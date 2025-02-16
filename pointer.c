#include <stdio.h>
void address(int *age)
{
    printf("Your age is %d\n", *age);
}
int main()
{
    int age = 21;
    int *pAge = NULL;
    pAge = &age;
    // printf("The value at age: %d\n", age);
    // printf("The value at the pointer address: %d\n", *pAge);

    // printf("The address of age is: %p\n", &age);
    // printf("The value at the pointer: %p\n", pAge);

    address(pAge);

    return 0;
}