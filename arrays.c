#include <stdio.h>
int main()
{
    float nums[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    for (int i=0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        printf("%.2f\n", nums[i]);
    }
    return 0;
}