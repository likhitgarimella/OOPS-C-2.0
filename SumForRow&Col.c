/* C program to read a matrix A (MxN) & find the following using
 * a) Sum of the elements of each row
 * b) Sum of the elements of each column
 * c) Find the sum of all the elements of the matrix
 * Output the computed results
 */

#include <stdio.h>
int Addrow(int array1[10][10], int k, int c);
int Addcol(int array1[10][10], int k, int r);
 
void main()
{
    int arr[10][10];
    int i, j, row, col, rowsum, colsum, sumall=0;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &row, &col);
    printf("Enter the elements of the matrix \n");
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Input matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    
    /* Computing row sum */
    for (i = 0; i < row; i++)
    {
        rowsum = Addrow(arr, i, col);
        printf("Sum of row %d = %d\n", i + 1, rowsum);
    }
    
    /* Computing col sum */
    for (j = 0; j < col; j++)
    {
        colsum = Addcol(arr, j, row);
        printf("Sum of column %d = %d\n", j + 1, colsum);
    }
    
    /* Computation of all elements */
    for (j = 0; j < row; j++)
    {
        sumall = sumall + Addrow(arr, j, col);
    }
    printf("Sum of all elements of matrix = %d\n", sumall);
}

/*  Function to add each row */
int Addrow(int array1[10][10], int k, int c)
{
    int rsum = 0, i;
    for (i = 0; i < c; i++)
    {
        rsum = rsum + array1[k][i];
    }
    return(rsum);
}

/*  Function to add each column */
int Addcol(int array1[10][10], int k, int r)
{
    int csum = 0, j;
    for (j = 0; j < r; j++)
    {
        csum = csum + array1[j][k];
    }
    return(csum);
}

