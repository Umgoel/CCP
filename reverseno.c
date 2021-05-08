//reverse a no
#include <stdio.h>
int main()
{
	int n,x=0,a=0,s=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
	a=n%10;
	s = s*10 + a;
	n=n/10;
	}
	printf("%d",s);
}