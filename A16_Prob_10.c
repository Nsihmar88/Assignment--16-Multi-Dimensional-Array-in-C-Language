// Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>

int main()
{
    int row, column, i , j, count=0, result=-1;

    printf("\nFor order of matrix:");
    printf("\nEnter number of row in matrix: ");
    scanf("%d",&row);
    printf("Enter number of column in matrix: ");
    scanf("%d",&column);
    printf("Order of matrix is: %d X %d.", row, column);

    int matrix_1[row][column], Array_1[row];
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
        count=0;
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
            if (Array_1[i]!=0)
            {
                if (Array_1[i]>Array_1[j])
                result = i;
                else
                result = j;
            }
        }
    }
    // Printing result
    if (result=0)
    {
        printf("\nMatrix row has maximum number of 1s is: row %d.",result+1);
    }
    else
        printf("\nMatrix don't have one in any row.");
    printf("\n ");
    return 0;
}
