#include <stdio.h>
int palindrome(int num)
{
    int rev=0;
    while(num)
    {
        int rem = num%10; // gets last digit of the number
        rev =  rev*10 + rem; // shift the decimal point of the reverse number and adds the last digit
        num /= 10; // reduces the actual number by 1 (discards the decimal portion from the integer) 
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num == palindrome(num))
        printf("%d is a palindrome...", num);
    else    
        printf("%d is not a palindrome...", num);
    return 0;
}