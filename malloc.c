#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number*sizeof(char));

    if(grades==NULL)
    {
        printf("\nMemory allocation failed\n");
        return 1;
    }

    for(int i=0; i<number; i++)
    {
        printf("Enter grade %d: ", i+1);
        scanf(" %c", &grades[i]);
    }
    printf("\n");
    for(int i=0; i<number; i++)
        printf("Grade %d is: %c\n", i+1, grades[i]);

    free(grades);
    grades = NULL;

    return 0;
}