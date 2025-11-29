//Q144: Write a function that accepts a structure as parameter and prints its members.



#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int marks;
};
void ab(struct student s){
    printf("%s\n",s.name);
    printf("%d\n",s.roll);
    printf("%d\n",s.marks);
}
int main(){
    struct student s1;
printf("enter name,roll,marks");
scanf("%s %d %d",s1.name,&s1.roll,&s1.marks);
ab(s1);

    return 0;
}