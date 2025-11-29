//Q140: Define a struct with enum Gender and print person's gender.


#include <stdio.h>
struct person{
enum {
    MALE,FEMALE
   }gender;
};
int main(){
struct person p;
p.gender=MALE;
if(p.gender==MALE)
printf("Male");
else 
printf("Female");

    return 0;
}