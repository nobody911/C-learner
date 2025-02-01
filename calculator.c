#include <stdio.h>
int main()
{
	int a=0, b=0;
	char c;
	printf("/n Enter the first number: ");
	scanf("%d", &a);
	printf("/n Enter the second number: ");
	scanf("%d", &b);
	printf("\n Enter the operator to be used: ");
	scanf("%c", &c); 
	if (c == '+')
	{
		printf("/n The addition of %d and %d is: %d", a, b, a+b);
	}
	elif (c == '-')
	{
		printf("/n The subtraction of %d and %d is: %d", a, b, a-b);
	}
	elif (c == '*')
	{
		printf("/n The multiplication of %d and %d is: %d", a, b, a*b);
	}
	elif (c == '/')
	{
		printf("/n The division of %d and %d is: %d", a, b, a/b);
	}
	elif (c == '%')
	{
		printf("/n The modulus of %d and %d is: %d", a, b, a%b);
	}
	else
	{
		printf("The operator you entered is not valid");
	}
return 0;
}
