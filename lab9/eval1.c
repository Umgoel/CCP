/*1. Develop a C program to perform arithmetic operations 
(addition, subtraction, multiplication, division and remainder) 
on two integers using pointers.*/
#include<stdio.h>
void ops(int* , int * , int *, int *, int *, float *, int *);
int main()
{
     int a,b;
     int add,sub,mul,rem;
     float quo;
     printf("Enter num 1 : ");
     scanf("%d",&a);
     printf("Enter num 2 : ");
     scanf("%d",&b);
     ops(&a, &b, &add, &sub, &mul, &quo, &rem);
     printf("\n");
     printf("Sum        :%d\n",add);
     printf("Difference :%d\n",sub);
     printf("Quotient   :%0.2f\n",quo);
     printf("Product    :%d\n",mul);
     printf("Remainder  :%d\n",rem);
}
void ops(int *a, int *b, int *add, int *sub, int *mul, float *quo, int *rem)
{
     *add=*a+*b;
     *sub=*a-*b;
     *mul= (*a)*(*b);
     *quo=(float)(*a)/(*b);
     *rem=(*a)%(*b);
}