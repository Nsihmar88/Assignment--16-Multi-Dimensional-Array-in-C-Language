// Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>

int main()
{
    int matrix_1[10][10], Sum_R_Diag_matrix=0, row, column, i , j;

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

    //  sum of right diagonals of a matrix
    j=column-1;
    for (i = 0; i < row; i++)
    {
        Sum_R_Diag_matrix = Sum_R_Diag_matrix + matrix_1[i][j];
        j--;      
    }

    // Printing result
    printf("\nSum of right diagonals of a matrix is: %d\n",Sum_R_Diag_matrix);

    return 0;
}