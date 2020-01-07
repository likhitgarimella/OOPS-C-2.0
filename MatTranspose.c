// C program to accept a matrix of order MxN and find its Transpose
#include <stdio.h>
 
void main()
{
    int array[10][10];
    int i, j, m, n;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the coefiicients of the matrix \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; i++)
    // the value of ‘j’ variable is initialized to 0
	// checks the condition that the value of ‘j’ variable is
	// less than the order of column defined in ‘n’ variable
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for (j = 0; j < n; j++)
    // the value of ‘i’ variable is initialized to 0
	// checks the condition that the value of ‘i’ variable is
	// less than the order of row defined in ‘m’ variable
    {
        for (i = 0; i < m; i++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}

