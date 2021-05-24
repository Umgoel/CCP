//2. Develop a C program to find an average of three integers using functions.
#include <stdio.h>
double avg(int x,int y,int z);
int main()
{
	int a,b,c;
	printf("Enter no 1 : ");
	scanf("%d",&a);
	printf("Enter no 2 : ");
	scanf("%d",&b);
	printf("Enter no 3 : ");
	scanf("%d",&c);
	double x = avg(a,b,c);
	printf("avg = %5.2lf \n",x);
}
double avg(int x,int y,int z){
	double av = (x+y+z)/3.0;
	return av;
}