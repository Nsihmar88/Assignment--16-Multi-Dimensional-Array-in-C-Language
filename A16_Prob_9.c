// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>

int main()
{
    int matrix_1[10][10], zero=0, non_zero=0,row, column, i , j;

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
            if (matrix_1[i][j]==0)
                zero++;
            else
                non_zero++;
        }
    }
    // Printing result
    if (zero>non_zero)
        printf("\nMatrix is a Sparse matrix.\n");
    else
        printf("\nMatrix is Not a sparse matrix.\n");
    printf("\n ");
    return 0;
}