//eval
//1.   Develop a C program to copy one string to another string and find its length without using built in functions.
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0;
    printf("Enter a string : ");
    gets(str1);
    for(int i=0;i<100;i++){
        str2[i]=str1[i];
    }
    while(str2[i]!='\0'){
        i++;
    }
    printf("The copied string : ");
    puts(str2);
    printf("\nlength = %d\n",i);
}