// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


#include<stdio.h>
int main(){

    int num;
    printf("Enter a intger");
    scanf("%d",&num);
    if(num == 0)
    printf("The Number is zero");
    else
       if(num > 0)
       printf("the number is poisitve");
       else
       printf("The number is negative");
       return 0;
}