#include <stdio.h>
void add_array(int a1[], int a2[], int add[])
{
    for(int i=0; i<5; i++)
        add[i]=a1[i]+a2[i];
}
int main()
{
    int arr1[5], arr2[5], res[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter the element at index %d of array 1: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("Enter the element at index %d of array 2: ", i);
        scanf("%d", &arr2[i]);
    }
    printf("\n");
    add_array(arr1, arr2, res);
    printf("The resultant array is: ");
    for(int i=0; i<5; i++)
        printf("%d ", res[i]);
    return 0;
}
