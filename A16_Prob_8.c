// Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>

int main()
{
    int matrix_1[10][10], Upper_triangular_matrix[10][10], row, column, i , j;

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
            if (i<=j)
            {
                Upper_triangular_matrix[i][j] = matrix_1[i][j];
            }
            else
                Upper_triangular_matrix[i][j] = 0;
        }
    }
    // Printing result matrix
    printf("\nThe Upper triangular matrices is:\n");
    for (i = 0; i < row; i++)
    {
        printf("| ");
        for (j = 0; j < column; j++)
        {
            printf("%d ",Upper_triangular_matrix[i][j]);
        }
        printf("|\n");        
    }
    printf("\n ");
    return 0;
}