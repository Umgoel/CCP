//factorial using while
#include <stdio.h>
int main()
{
	int n,f=1;
	printf("Enter n : ");
	scanf("%d",&n);
	while(n>0)
	{
	f*=n;
	n--;
	}
	printf("%d\n",f);
}