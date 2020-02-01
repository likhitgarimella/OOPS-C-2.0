#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50], str2[50];
	
	printf("\nEnter first string: \n");
	gets(str1);
	printf("\nEnter second string: \n");
	gets(str2);
	
	printf("\nFirst string is %s", str1);
	printf("\nSecond string is %s", str2);
	
	strcat(str1, str2);
	printf("\n\nCombined string is %s", str1);
	getch();
}


