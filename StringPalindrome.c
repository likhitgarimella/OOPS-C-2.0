/* C program to read a string and check if it's a palindrome,
 * without using library functions. Display the result.
 */
#include <stdio.h>
#include <string.h>
 
void main()
{
    char str[25], rev_str[25] = {'\0'};
    int  i, length = 0, flag = 0;
 
    printf("Enter a string \n");
    gets(str);
    // Keep going through each character of the string till its end
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    // Compare the elements of both the arrays.
    for (i = length - 1; i >= 0; i--)
    {
       rev_str[length - i - 1] = str[i];
    }
    
    // Compare the input string and its reverse. 
	// If both are equal then the input string is palindrome.
    for (i = 0; i < length; i++)
    {
        if (rev_str[i] == str[i])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%s is a palindrome \n", str);
    else
        printf("%s is not a palindrome \n", str);
}

