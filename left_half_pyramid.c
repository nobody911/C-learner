#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++)
    {
        /*for(int j=1; j<=i+1; j++)
        {
            printf("%d ", j);
        }*/

    // repeating numbers
       
       /*for(int j=0; j<i; j++)
            printf("%d", i);
        printf("\n");*/

    // sequential numbers

    static int k=1;
    for(int j=1; j<=i; j++)
    {
        printf("%d ", k);
        k++;
    }
    printf("\n");
    }
    return 0;
}