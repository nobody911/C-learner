#include <stdio.h>
#include <math.h>
void birthday(char name[], int age)
{
    printf("Your name is: %s", name);
    printf("\nYou are %d years old", age);
}
double square(double num)
{
    return pow(num, 2);
}
int main()
{
    char name[] = "Master";
    int age = 12;
    double input = 5.5, res;
    birthday(name, age);
    res = square(input);
    printf("\nThe square of %.2lf is %.3lf",input ,res);
    return 0;
}