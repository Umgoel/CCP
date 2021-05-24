//2. Program to read a character in uppercase and then print it in lower case.
#include <stdio.h>
int main()
{
	char c;
	printf("Enter a char in upper : ");
	scanf("%c",&c);
	int x = c;
	int y = x+32;
	printf("%c\n",y);
}