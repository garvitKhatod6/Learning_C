//Q145: Return a structure containing top student's details from a function.



#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int marks;
};
struct student ab(struct student s1,struct student s2,struct student s3 ){
    struct student top=s1;
    if(s2.marks>top.marks)
    top=s2;
    if(s3.marks>top.marks)
    top=s3;
    return top;
}

int main(){
struct student s1={"Abhay",50,30};
struct student s2={"rahul",30,20};
struct student s3={"ram",30,10};
struct student topper=ab(s1,s2,s3);
printf("the topper is \n %s \n roll:%d \n marks:%d ",topper.name,topper.roll,topper.marks);

    return 0;
}
