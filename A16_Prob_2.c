// Write a program to calculate the product of two matrices each of order 3x3.

#include<stdio.h>

int main()
{
    int matrix_1[10][10], matrix_2[10][10], Product_matrix[10][10], row, column, i , j, k, sum=0;

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
    // Second matrix input
    printf("\nEnter elements of matrix 2: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d",&matrix_2[i][j]);
        }        
    }

    // Multplying the martrics
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            for (k = 0; k < row; k++)
            {
                sum = sum + matrix_1 [i][k] * matrix_2[k][j];
            }
            Product_matrix[i][j] = sum;
            sum=0;          
        }        
    }

    // Printing result matrix
    printf("Product of matrices is:\n");
    for (i = 0; i < row; i++)
    {
        printf("| ");
        for (j = 0; j < column; j++)
        {
            printf("%d ", Product_matrix[i][j]);
        }
        printf("|\n");        
    }
    return 0;
}