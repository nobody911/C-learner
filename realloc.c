#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    printf("Enter the number of items: ");
    scanf("%d", &number);
    float *prices = malloc(number*sizeof(float));
    if(prices==NULL)
    {
        printf("Memory allocation failed!!!");
        return 1;
    }
    for(int i=0; i<number; i++)
    {
        printf("Enter the price of item #%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    int newNumber;
    printf("Enter the new number of items: ");
    scanf("%d", &newNumber);
    float *temp = realloc(prices, newNumber*sizeof(float));
    if(temp==NULL)
        printf("Memory reallocation failed!!!");
    else
    {
        prices = temp;
        temp = NULL;
        for(int i=number; i<number+newNumber; i++)
        {
            printf("Enter the price of item #%d: ", i+1);
            scanf("%f", &prices[i]);
        }
        for(int i=0; i<number+newNumber; i++)
            printf("\nThe price of product %d is: ₹%.2f", i+1, prices[i]);
    }
    free(prices);
    prices = NULL;
    return 0;
}