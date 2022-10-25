// Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>

int main()
{
    int matrix_1[10][10], Sum_R = 0, Sum_C = 0,row, column, i , j;

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

    //  sum of rows and columns of a matrix
   
    for (i = 0; i < row; i++)
    {
        Sum_R = 0; Sum_C = 0;
        for (j = 0; j < column; j++)
        {
            Sum_R = Sum_R + matrix_1[i][j];
            Sum_C = Sum_C + matrix_1[j][i];
        }
        printf("\nSum of Row %d is: %d",i+1,Sum_R); 
        printf("\nSum of Column %d is: %d",i+1,Sum_C);
        printf("\n");
    }
    printf("\n ");

    return 0;
}