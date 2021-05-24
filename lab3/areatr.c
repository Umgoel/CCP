//Develop a C program to find the area of a triangle given its 
//sides as input using functions.
#include <stdio.h>
#include <math.h>
double area(double a, double x, double y);
int main()
{
	double a,b,c;
	printf("Enter side 1 : ");
	scanf("%lf",&a);
	printf("Enter side 2 : ");
	scanf("%lf",&b);
	printf("Enter side 3 : ");
	scanf("%lf",&c);
	double x = area(a,b,c);
	printf("Area = %5.2lf \n",x);	
}
double area(double a,double b,double c)
{
	double ar;
	double s = (a+b+c)/2;
	ar = sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}