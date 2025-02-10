#include <stdio.h>
int max(int num_1, int num_2)
{
    return (num_1>num_2) ? num_1 : num_2;   // ternary or conditional operator
}
int main()
{
    int x = 3, y = 4;
    int max_num = max(x, y);
    printf("The greater number is: %d", max_num);
    return 0;
}