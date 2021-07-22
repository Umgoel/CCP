/*Demonstrate how to read data from the keyboard, write it to a file
called BMSCE, again read the same data from the BMSCE file and display it on the screen/console.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char data[100];
    fp = fopen("BMSCE.txt","w");          
    if(fp==NULL){
        printf("\nFile could not be opened");
        exit(1);
    }
    printf("Enter data : ");            
    gets(data);
    fprintf(fp,"%s",data);

    fscanf(fp,"%s",data);
    printf("Data from file : \n");
    printf("%s\n",data);
    fclose(fp);
}