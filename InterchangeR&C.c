// C program to accept a matrix of given order and Interchange
// any two rows and columns in the original matrix.
#include <stdio.h>
 
void main()
{
    int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;
    // i,j -> for matrix elements coefficients
    // m,n -> for order of the matrix
    // a,b -> the 2 row numbers which are to be interchanged
    // c -> to store the swapped value of a & b
    // p,q -> the 2 column numbers which are to be interchanged
    // r -> to store the swapped value of p & q
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficents of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d,", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }
    printf("Enter the numbers of two rows to be exchanged \n");
    scanf("%d %d", &a, &b);
    for (i = 0; i < m; ++i)
    {
        /*  first row has index '0' */
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
    printf("Enter the numbers of two columns to be exchanged \n");
    scanf("%d %d", &p, &q);
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
        	printf(" %d", array2[i][j]);	
		}
		printf("\n");
    }
    for (i = 0; i < n; ++i)
    {
        /*  first column index is '0' */
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
    }
    printf("The matix after interchanging the two rows(in the original matrix) \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
        	printf(" %d", array1[i][j]);	
		}
		printf("\n");
    }
    printf("The matix after interchanging the two columns(in the original matrix) \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
        	printf(" %d", array2[i][j]);
		}
		printf("\n");
    }
}

