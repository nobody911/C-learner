#include <stdio.h>
void del_array(int a[], int size, int index)
{
    for(int i=index; i<size; i++)
        a[i]=a[i+1];
}
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size], index, arr_size;
    
    printf("\n");
    
    for(int i=0; i<size; i++)
    {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the index number to be deleted: ");
    scanf("%d", &index);
    
    printf("\n");
    
    del_array(arr, size, index);

    for(int i=0; i<size-1; i++)
        printf("%d ", arr[i]);
    return 0;
}