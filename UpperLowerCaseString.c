#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[50];
	printf("\nEnter any String: \n");
	gets(str);
	
	printf("\nGiven string is %s", str);
	
	strupr(str);
	printf("\nUpper case string is %s", str);
	
	strlwr(str);
	printf("\nLower case string is %s", str);
	getch();
}
