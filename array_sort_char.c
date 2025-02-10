#include <stdio.h>
void sort(char array[], int size)
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
void display_sort(char array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%c ", array[i]);
    }
}
int main()
{
    char array[10];
    int size;
    for(int i=1; i<= sizeof(array)/sizeof(array[0]); i++)
    {
        printf("\nEnter the %d character: ", i);
        scanf("%c", &array[i]);
        scanf("%c");
    }
    size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    display_sort(array, size);
    return 0;
}