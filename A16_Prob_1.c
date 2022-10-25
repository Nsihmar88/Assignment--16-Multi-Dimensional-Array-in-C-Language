// Write a program to calculate the sum of two matrices each of order 3x3.

#include<stdio.h>

int main()
{
    int matrix_1[10][10], matrix_2[10][10], sum_matrix[10][10], row, column, i , j;

    printf("\nFor order of matrix:");
    printf("\nEnter number of row in matrix: ");
    scanf("%d",&row);
    printf("Enter number of column in matrix: ");
    scanf("%d",&column);
    printf("Order of matrix is: %d X %d.", row, column);

    // First matrix input
    printf("\n\nEnter elements of matrix 1: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d",&matrix_1[i][j]);
        }        
    }
    // second matrix input
    printf("\nEnter elements of matrix 2: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d",&matrix_2[i][j]);
        }        
    }

    // adding the martrics
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum_matrix[i][j]= matrix_1 [i][j] + matrix_2[i][j];
        }        
    }

    // Printing result matrix
    printf("Sum of matrices is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ",sum_matrix[i][j]);
        }
        printf("\n");        
    }

    return 0;
}