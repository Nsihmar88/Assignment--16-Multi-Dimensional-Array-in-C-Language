// Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>

int main()
{
    int matrix_1[10][10], Array_1[100],row, column, i , j, count=0, result;

    printf("\nFor order of matrix:");
    printf("\nEnter number of row in matrix: ");
    scanf("%d",&row);
    printf("Enter number of column in matrix: ");
    scanf("%d",&column);
    printf("Order of matrix is: %d X %d.", row, column);

    // matrix input
    printf("\n\nEnter elements of matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d",&matrix_1[i][j]);
        }        
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (matrix_1[i][j]==1)
                count++;
        }
        Array_1[i]=count;
    }

    for (i = 0; i < row-1; i++)
    {
        for (j = 1; j < row; j++)
        {
            if (Array_1[i]>Array_1[j])
                result = i;
            else
                result = j;
        }
    }
    // Printing result
    printf("\nMatrix row has maximum number of 1s is: %d row.",result);
    printf("\n ");
    return 0;
}