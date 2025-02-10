#include <stdio.h>
void sort(int array[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}
void display_sort(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int array[10], size;
    for(int i=1; i<= sizeof(array)/sizeof(array[0]); i++)
    {
        printf("\nEnter the %d number: ", i);
        scanf("%d", &array[i]);
    }
    size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    display_sort(array, size);
    return 0;
}