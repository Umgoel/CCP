//odd or even
#include <stdio.h>
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	if(n%2==0)
	printf("Even number");
	else 
	printf("Odd number");
printf("%d",n%(-2));
}
//check how mod operates with negative and positive operands