#include <stdio.h>
int main()
{
    // int nums[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row, column;
    printf("Enter the size of rows: ");
    scanf("%d", &row);
    printf("\nEnter the size of columns: ");
    scanf("%d", &column);
    int nums[row][column];
    /*nums[0][0] = 1;
    nums[0][1] = 2;
    nums[0][2] = 3;
    nums[1][0] = 4;
    nums[1][1] = 5;
    nums[1][2] = 6;
    nums[2][0] = 7;
    nums[2][1] = 8;
    nums[2][2] = 9;*/

    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    /*printf("%d\n", rows);
    printf("%d\n", columns);*/

    
    // for user input in 2d array
    
    for(int i=0; i<rows; i++)   
    {
        for(int j=0; j<columns; j++)
        {
            printf("\nEnter the data for array nums[%d][%d]: ", i,j);
            scanf("%d", &nums[i][j]);
        }
    }
    // for user output in 2d array
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}