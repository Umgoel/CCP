//2.  Illustrate pointers in swapping two numbers.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int *a1,*b1;
    a1 = &a;
    b1 = &b;
    int c = *a1;
    *a1=*b1;
    *b1=c;
    printf("numbers after swapping : \na = %d\nb = %d\n",a,b);
}