//print all even numbers from 1 to n using while
#include <stdio.h>
int main()
{
	int n,x=2;
	printf("Enter n :");
	scanf("%d",&n);
	while(x>1)
	{
	if (n>1)
	{
	if(x%2==0)
	{
	printf("%d\n",x);
	}
	}
	x++;
	n--;
	}
}