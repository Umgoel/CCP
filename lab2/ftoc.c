//F to C
#include <stdio.h>
int main()
{
	float f;
	printf("Enter temp in F : ");
	scanf("%f",&f);
	float c = (f-32)*5/9;
	printf("temp in celsius : %.2f \n",c);
}