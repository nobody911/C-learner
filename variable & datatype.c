#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age = 19;
    unsigned int num1 = 19;
    short num2 = 20;
    unsigned short num3 = 20;
    float pi = 3.14159265359;
    double pi_double = 3.14159265359;
    char grade = 'C';
    unsigned char num = 100;
    char name[] = "Dude";
    bool a = true;

    // format specifiers for the above datatypes

    printf("\nInteger = %d", age);
    printf("\nUnsigned integer = %u", num1);
    printf("\nSigned short integer = %d", num2);
    printf("\nFloat = %f", pi);
    printf("\nDouble = %lf", pi_double);
    printf("\nChar = %c", grade);
    printf("\nUnsigned char = %c", num);
    printf("\nYour name is: %s", name);
    printf("\nThe value of boolean is: %d", a);

    return 0;
}