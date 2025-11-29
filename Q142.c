//Q142: Store details of 5 students in an array of structures and print all.



#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int marks;
};
int main(){
    int i;
struct student s[5];
for(i=0;i<5;i++){
    printf("details of student %d\n",i+1);
    printf("enter name");
    scanf("%s",s[i].name);
    printf("enter roll number");
    scanf("%d",&s[i].roll);
    printf("enter marks");
    scanf("%d",&s[i].marks);
}
printf("\n %-15s %-10s %-10s\n","NAME","ROLL","MARKS");
for(i=0;i<5;i++){
printf("%-15s %-10d %-10d\n",s[i].name,s[i].roll,s[i].marks);
}

    return 0;
}