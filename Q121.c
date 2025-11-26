/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.*/


#include <stdio.h>
int main(){
    int age;
    char name[100];
FILE *file;
file=fopen("info.txt","w");
printf("enter the name");
scanf("%s",name);
printf("enter age");
scanf("%d",&age);
fprintf(file,"Name:%s , age:%d",name,age);
fclose(file);
printf("File created successfully! Data written to info.txt\n");

    return 0;
}