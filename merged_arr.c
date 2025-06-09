#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], res[10], n;
    for(int i=0; i<5; i++)
    {
        printf("Enter the element at index %d of array 1: ", i);
        scanf("%d", &arr1[i]);
        res[i]=arr1[i];
        n=i;
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("Enter the element at index %d of array 2: ", i);
        scanf("%d", &arr2[i]);
        res[i+5]=arr2[i];
    }
    printf("\nThe resultant merged array is: ");
    for(int i=0; i<10; i++)
        printf("%d ", res[i]);
    return 0;
}