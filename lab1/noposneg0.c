//Accept 10 numbers from the user one after the other, count the number of positives, negatives and zeros  (use while). 
#include <stdio.h>
int main()
{
	int n,x=1,p=0,neg=0,z=0;
	while(x<=5)
	{
	x++;
	printf("Enter n : ");
	scanf("%d",&n);
	if(n>0)
	p++;
	else if(n<0)
	neg++;
	else
	z++;
	}	
	printf("Positives : %d\n",p);
	printf("Negatives : %d\n",neg);
	printf("Zeroes : %d\n",z);	
}