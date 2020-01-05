// C Program to Read an Array & Increment every Element of the Array by one
// And Print the Incremented Array
 
#include <stdio.h>
void incrementArray(int[]);
void main()
    {
        int array[100], size, i;
        printf("\n Enter the size of the array: ");
		scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: \n", size);
        for (i = 0; i < size; i++)
			scanf("%d", &array[i]);
        
        incrementArray(array);
        for (i = 0; i < size; i++)
           printf("%d\t", array[i]);
    }
 
void incrementArray(int arr[])
    { 
        int array[100], size, i;
        for (i = 0; i < size; i++)
            arr[i]++;     // This alters values in array in main()
    }
    
