//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.



#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int marks;
};
int main(){
struct student s1;
printf("enter name,roll,marks");
scanf("%s %d %d",s1.name,&s1.roll,&s1.marks);
printf("Name: %s\n Roll:%d\n marks:%d",s1.name,s1.roll,s1.marks);

    return 0;
}