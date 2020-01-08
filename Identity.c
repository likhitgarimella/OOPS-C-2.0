// C Program to check if a given matrix is an identity matrix
#include <stdio.h>
 
int main()
{
	int a[10][10];
	int i = 0, j = 0, row = 0, col = 0;
 
	printf ("Enter the order of the matrix (mxn):\n");
	printf ("where m = number of rows; and\n");
	printf ("where n = number of columns\n");
	scanf ("%d %d", &row, &col);
 
	int flag = 0;
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	
	printf("MATRIX is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++) 
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
    }
 	
 	// Equality condition
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}
 
	if (flag == 0)
	{
		printf ("It is an IDENTITY MATRIX\n");
	}
	else
	{
		printf ("It is NOT an identity matrix\n");
	}
	return 0;
}

