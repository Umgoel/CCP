//3. Program to print the digit at one's place of a number.
#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int x = n%10;
	printf("the digit at one's place : %d\n",x);
}