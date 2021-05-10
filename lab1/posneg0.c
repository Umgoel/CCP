//3. check if a given number is positive negative or zero. 
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	if(n>0)
		printf("%d is positive\n",n);
	else if(n<0)
		printf("%d is negative\n",n);
	else
		printf("%d is 0\n",n);
}