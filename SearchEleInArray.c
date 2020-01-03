//C program to accept an array of N elements and a key to search.

#include <stdio.h>
void main()
{
    int array[20];
    int i, low, mid, high, key, size;
 
    printf("Enter the size of an array\n");
    scanf("%d", &size);
 
    printf("Enter the array elements\n");
    for (i = 0; i < size; i++) 
        scanf("%d", &array[i]);
 
        printf("Enter the key\n");
        scanf("%d", &key);
 
        // Search begins
        low = 0;
        high = (size - 1);
 
        while (low <= high)	// Run a loop till the low becomes equal to high.
        {
            mid = (low + high) / 2;
            if (key == array[mid])
// Check if the value at mid matches the user input, if it does..
// That means we found the element and now we can return.
            {
                printf("SUCCESSFUL SEARCH\n");
                return;
            }
// If user input is greater than value at mid, then low is shifted to mid.
// Similarly if user input is smaller than mid, then high is shifted to mid.
            if (key < array[mid])
                high = mid - 1;
            else
                low = mid + 1;
 
        }
        printf("UNSUCCESSFUL SEARCH\n");
}

