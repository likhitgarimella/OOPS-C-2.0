// C Program to Display Upper Triangular Matrix
 
#include <stdio.h>

void main()
    {
        int i, j, r, c, array[10][10];
        printf("Enter the r and c value: \n");
 
        scanf("%d%d", &r, &c);
        
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("array[%d][%d] = ", i, j);
                scanf("%d", &array[i][j]);
            }
        }
 
        printf("Matrix is \n");
        
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("%3d", array[i][j]);
            }
            printf("\n");
        }
 
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
                if (i >= j)
                {
                    printf("%3d", array[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }
        }
 
        printf("\n\n");
        
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
	            if (j >= i)
                    {
                	printf("%3d", array[i][j]);
            	    }
            	    else 
                    {
	            	}
        }
    }
}

