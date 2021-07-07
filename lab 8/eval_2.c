/*eval 
2.Develop a C program to create student structure, read two student details
( student roll number, name, section, department, fees, and results i.e., total marks obtained) and print the student details  who has scored the highest.*/
#include<stdio.h>
struct student{
    long int rno;
    char name[50];
    char sec[3];
    char dept[3];
    int fees;
    float marks;
    };
int main(){
    int i;
    struct student s1,s2,sh;
    printf("\nEnter student 1 details : \n");
    printf("enter roll no : ");
    scanf("%ld",&s1.rno);
    printf("enter name : ");
    scanf("%s",s1.name);
    printf("enter section : ");
    scanf("%s",s1.sec);
    printf("enter dept : ");
    scanf("%s",s1.dept);
    printf("enter fees : ");
    scanf("%d",&s1.fees);
    printf("enter marks : ");
    scanf("%f",&s1.marks);

    printf("\nEnter student 2 details : \n");
    printf("enter roll no : ");
    scanf("%ld",&s2.rno);
    printf("enter name : ");
    scanf("%s",s2.name);
    printf("enter section : ");
    scanf("%s",s2.sec);
    printf("enter dept : ");
    scanf("%s",s2.dept);
    printf("enter fees : ");
    scanf("%d",&s2.fees);
    printf("enter marks : ");
    scanf("%f",&s2.marks);

    if(s1.marks>s2.marks){
        sh = s1;
        printf("Student with higher score : ");
        printf("Roll No : %ld\n",sh.rno);
        printf("Name : %s\n",sh.name);
        printf("Section : %s\n",sh.sec);
        printf("Dept : %s\n",sh.dept);
        printf("Fees : %d\n",sh.fees);
        printf("Marks : %f\n",sh.marks);}
    else if(s1.marks<s2.marks){
        sh = s2;
        printf("Student with higher score : ");
        printf("Roll No : %ld\n",sh.rno);
        printf("Name : %s\n",sh.name);
        printf("Section : %s\n",sh.sec);
        printf("Dept : %s\n",sh.dept);
        printf("Fees : %d\n",sh.fees);
        printf("Marks : %f\n",sh.marks);
    }
    else
        printf("both students have same marks\n");
    
}