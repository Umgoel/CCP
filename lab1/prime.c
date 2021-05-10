//prime no
#include <stdio.h>
int main()
{
	int a,c=0,n;
	printf("Enter a no : ");
	scanf("%d",&a);
	n=a;
	while(n>0)
	{
		if(a%n==0)
			c++;
	n--;
	}
	if(c==2)
	printf("prime\n");
	else
	printf("composite\n");
}